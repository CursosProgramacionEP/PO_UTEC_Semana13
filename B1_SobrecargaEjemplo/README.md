# B1 – Sobrecarga de funciones y de operadores (sesión 12B)

> Ejemplo 1 de la sesión 12B: el código de `tipos.h`, `funciones.h/.cpp`, `Alumno.h/.cpp` y `main.cpp` que aparece en la diapositiva 10, armado y compilable.

Es el ejemplo del profesor, no un ejercicio: sirve para ver las dos formas de **sobrecarga** antes de resolver B3. El ejercicio de esta sesión es [B3_SumaSobrecargada](../B3_SumaSobrecargada).

## Qué muestra

| Parte | Qué sobrecarga | Dónde |
|---|---|---|
| `swap(entero&, entero&)` / `swap(real&, real&)` | **funciones**: mismo nombre, distinta lista de parámetros | `funciones.h/.cpp` |
| `Alumno::operator+=` | **operadores**: se le enseña a `+=` qué hacer con dos alumnos | `Alumno.h/.cpp` |

Las dos son **polimorfismo ad-hoc → overloading**, la rama de abajo a la izquierda del cuadro de clasificación de Cardelli y Wegner. Nada que ver con `virtual`: aquí todo se decide en **tiempo de compilación**.

## Sobrecarga de funciones

```cpp
void swap(entero&, entero&);
void swap(real&, real&);
```

El compilador elige por **el tipo de los argumentos**, no por el de retorno:

```cpp
int x = 3, y = 7;        swap(x, y);     // llama a la version entera
float r1 = 1.5, r2 = 2.5; swap(r1, r2);  // llama a la version real
```

Dos funciones se diferencian por **número y tipo de parámetros**. Cambiar solo el tipo de retorno **no** es sobrecarga: `int f(int)` y `float f(int)` no compilan juntas.

Los parámetros van por **referencia** (`&`): sin eso la función intercambiaría copias y el `main` no vería nada.

## Sobrecarga de operadores

```cpp
Alumno& Alumno::operator+=(Alumno alu) {
    this->edad += alu.getEdad();
    return *this;
}
```

Sintaxis general de la diapositiva 9:

```
ReturnType classname::operator OperatorSymbol(lista de argumentos)
```

- Devuelve `Alumno&` (referencia) para poder encadenar: `a1 += a2 += a3`.
- `return *this;` devuelve el propio objeto, no una copia.
- Sumar edades de alumnos no tiene mucho sentido en la vida real; lo que importa es la mecánica.

## Para pensar: el `swap` de la diapositiva

La diapositiva declara las dos funciones así:

```cpp
int swap(entero&, entero&);
float swap(real&, real&);
```

…pero ninguna de las dos implementaciones tiene `return`. Eso no es un detalle de estilo:

```
warning: no return statement in function returning non-void [-Wreturn-type]
```

Y al ejecutarlo, el programa **se cae** (`Illegal instruction`): salirse de una función que declara valor de retorno sin retornar nada es *comportamiento indefinido*, y g++ coloca ahí una instrucción inválida.

En esta carpeta la firma está corregida a `void`, que es lo que la función realmente hace. La pregunta para la clase: ¿por qué el compilador solo avisa con un *warning* y no con un error?

## Preguntas de la sesión

| Pregunta | Respuesta |
|---|---|
| ¿Esto necesita herencia o `virtual`? | No. La sobrecarga se resuelve en compilación |
| ¿Puedo diferenciar dos funciones solo por el tipo de retorno? | No: el compilador no sabría cuál elegir |
| ¿`swap` choca con `std::swap` si uso `using namespace std;`? | No: la nuestra es coincidencia exacta y gana a la plantilla de la STL |
| ¿Por qué los parámetros van con `&`? | Para intercambiar los originales y no copias |
| ¿Por qué `operator+=` devuelve referencia? | Para poder encadenar y no copiar el objeto |
| ¿Qué operadores se pueden sobrecargar? | Casi todos; no `.`, `::`, `?:` ni `sizeof` |

## Ejecución

El programa pide dos enteros y dos reales:

```
Ingrese los valores enteros a intercambiar:
3 7
7 : 3
Ingrese los valores reales a intercambiar:
1.5 2.5
2.5 : 1.5
25
```

El `25` final es `a1 += a2` con edades 10 y 15.

## Tareas

- [ ] **1. `tipos.h`.** Los tres `using` de la diapositiva.
- [ ] **2. `funciones.h`.** Declara las dos versiones de `swap` con parámetros por referencia.
- [ ] **3. `funciones.cpp`.** Implementa el intercambio con una variable temporal.
- [ ] **4. Comprueba la elección.** Pon un `cout` distinto en cada versión y confirma cuál entra con enteros y cuál con reales.
- [ ] **5. `Alumno.h`.** Atributo privado `edad`, dos constructores y `getEdad()`, todo dentro del `.h` como en la diapositiva.
- [ ] **6. `operator+=`.** Declarado en el `.h`, implementado en el `.cpp`, devolviendo `*this`.
- [ ] **7. `main`.** Lee los valores, llama a los dos `swap` y prueba `a1 += a2`.
- [ ] **8. Para pensar.** Intenta declarar `int swap(entero&, entero&)` y `float swap(entero&, entero&)` a la vez. ¿Qué dice el compilador y por qué?
