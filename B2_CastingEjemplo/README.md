# B2 – Casting: polimorfismo de coerción (sesión 12B)

> Ejemplo 2 de la sesión 12B: conversión implícita y explícita entre tipos, y los cuatro operadores de casting de C++.

Cubre la cuarta rama del cuadro de clasificación: **ad-hoc → coercion**.

## Las dos familias

| | Implícita | Explícita |
|---|---|---|
| Quién la hace | el compilador, solo | el programador, escribiéndola |
| Sintaxis | `entero a = 9.99;` | `(entero) 3.1415` o `static_cast<entero>(3.1415)` |
| Avisa si se pierde algo | a veces, con un warning | no: usted dijo que sabía lo que hacía |

## La escalera de promoción

```
bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
```

- **Hacia la derecha** (promoción): no se pierde nada. `char` → `int` es seguro.
- **Hacia la izquierda** (truncamiento): se pierde información. `9.99` → `9`, y `65.5` → `65`.

El caso que más confunde:

```cpp
entero codigo = 65;
real mitad = codigo / 2;        // 32    <- la division es ENTERA y recien despues se convierte
real mitad_ok = codigo / 2.0f;  // 32.5  <- aqui ya hay un real en la operacion
```

La conversión ocurre al **asignar**, no al dividir. Si los dos operandos son enteros, la división es entera.

## Los cuatro casts con nombre

| Operador | Para qué | En el ejemplo |
|---|---|---|
| `static_cast` | conversiones normales entre tipos relacionados | `static_cast<entero>(19.99)` |
| `const_cast` | quitar (o poner) `const` | leer un `const int` por un puntero no const |
| `reinterpret_cast` | leer los mismos bytes como otro tipo | el primer byte de `65` como `'A'` |
| `dynamic_cast` | preguntar en ejecución de qué clase es un objeto | `dynamic_cast<Gato*>(animal)` |

Los cuatro hacen lo que el casting estilo C `(tipo)valor` hacía de un solo golpe. La diferencia es que **se ven**: buscar `static_cast` en el código encuentra todas las conversiones, buscar `(int)` no.

## `dynamic_cast`, el que conecta con el polimorfismo

```cpp
Gato* gato = dynamic_cast<Gato*>(animales[i]);
if (gato != nullptr) {
    gato->ronronear();      // metodo que solo existe en Gato
}
```

- Es el `instanceof` de Java, pero devuelve `nullptr` en vez de lanzar excepción.
- Necesita que la clase sea **polimórfica**: al menos una función virtual. Por eso `Animal` tiene `sonido()` virtual y destructor virtual.
- Baja por la jerarquía (de la superclase a la subclase); subir no necesita cast.

Y la advertencia de siempre: **usarlo suele ser señal de mal diseño**. Si el `main` tiene que preguntar de qué tipo es cada objeto, ese comportamiento debió estar dentro de una función virtual, como en A1 a A5. Aquí se usa solo para ver cómo funciona.

## Preguntas de la sesión

| Pregunta | Respuesta |
|---|---|
| ¿`entero a = 9.99` redondea? | No: trunca. Da 9, no 10 |
| ¿Por qué `codigo / 2` da 32 y no 32.5? | Los dos operandos son enteros: la división es entera |
| ¿`static_cast` o `(tipo)valor`? | `static_cast`: se ve, es buscable y el compilador verifica más |
| ¿Puedo modificar la variable tras un `const_cast`? | Compila, pero si el original era `const` es comportamiento indefinido |
| ¿Por qué `dynamic_cast` necesita una función virtual? | Porque usa la información de tipo en ejecución, que solo existe en clases polimórficas |
| ¿Qué devuelve `dynamic_cast` si falla? | `nullptr` con punteros; con referencias lanza `std::bad_cast` |

## Ejecución

```
--- 2. La escalera de promocion ---
letra 'A'          -> 65
codigo / 2         -> 32  (division entera)
codigo / 2.0f      -> 32.5

--- 6. dynamic_cast: preguntar de que clase es ---
Michi dice Miau -> si era un gato: Michi ronronea
Generico dice ... -> no es un gato
```

## Tareas

- [ ] **1. `tipos.h`.** Los `using` de `entero`, `real` y `caracter`.
- [ ] **2. Conversión implícita.** Asigna un entero a un real, un real con decimales a un entero y un `double` a un `long int`. Imprime cada resultado.
- [ ] **3. División entera.** Comprueba la diferencia entre `codigo / 2` y `codigo / 2.0f`.
- [ ] **4. `static_cast`.** Reescribe el casting estilo C `(entero) 3.1415` usando `static_cast`.
- [ ] **5. `const_cast`.** Toma la dirección de un `const int` y léela por un puntero no `const`.
- [ ] **6. `reinterpret_cast`.** Mira el primer byte de un `int` como `char`. *Pista: con 65 sale `'A'`.*
- [ ] **7. Clases `Animal` y `Gato`.** `Animal` con `sonido()` virtual y destructor virtual; `Gato` con `ronronear()`, que solo existe en la subclase.
- [ ] **8. `dynamic_cast`.** Recorre un arreglo de `Animal*` y llama a `ronronear()` solo en los que sí son gatos.
- [ ] **9. Comprobación.** Quita el `virtual` de `Animal::sonido()` y del destructor. ¿Qué dice el compilador sobre el `dynamic_cast`?
- [ ] **10. Para pensar.** ¿Cómo se resolvería el punto 8 **sin** `dynamic_cast`? ¿Por qué sería mejor diseño?
