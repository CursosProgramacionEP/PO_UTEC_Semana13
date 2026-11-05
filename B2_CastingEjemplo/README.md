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

Son los que nombra la diapositiva 14, en lugar del casting estilo C:

| Operador | Para qué |
|---|---|
| `static_cast` | conversiones normales entre tipos relacionados |
| `const_cast` | quitar (o poner) `const` |
| `reinterpret_cast` | leer los mismos bytes como otro tipo |
| `dynamic_cast` | preguntar en ejecución de qué clase es un objeto |

Los cuatro hacen lo que el casting estilo C `(tipo)valor` hacía de un solo golpe. La diferencia es que **se ven**: buscar `static_cast` en el código encuentra todas las conversiones, buscar `(int)` no.

`dynamic_cast` es el único de los cuatro que **verifica en ejecución**, y por eso exige una clase polimórfica: necesita al menos un método virtual para consultar el tipo real del objeto. Es el `instanceof` de Java, pero devuelve `nullptr` en vez de lanzar excepción. Se usa sobre jerarquías de herencia, como las de la sesión 12A.

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
real b = 6      -> 6
entero a = 9.99 -> 9
Velocidad 65
(entero) 3.1415 -> 3
```

## Tareas

- [ ] **1. `tipos.h`.** Los `using` de `entero`, `real` y `caracter`.
- [ ] **2. Conversión implícita.** Asigna un entero a un real, un real con decimales a un entero y un `double` a un `long int`. Imprime cada resultado.
- [ ] **3. Conversión explícita.** Convierte `3.1415` a entero con el casting estilo C `(entero)`.
- [ ] **4. Reescríbelo con `static_cast`.** Misma conversión, con el operador con nombre.
- [ ] **5. División entera.** Comprueba qué imprime `codigo / 2` y qué imprime `codigo / 2.0f` cuando `codigo` es 65.
- [ ] **6. Para pensar.** ¿En qué momento ocurre la conversión en `real mitad = codigo / 2;`: al dividir o al asignar?
