# CPP Module 04

C++ exercises exploring subtype polymorphism, abstract classes, and deep copy
semantics. Part of the 42 school C++ curriculum.

## Technologies

- C++98
- Makefile

## Build Instructions

Each exercise is in its own directory. To compile:

```bash
cd ex00   # or ex01
make
```

Available Makefile targets:

| Command       | Description                  |
|---------------|------------------------------|
| `make`        | Compile the project          |
| `make clean`  | Remove object files          |
| `make fclean` | Remove object files + binary |
| `make re`     | Full recompile               |

## Usage

```bash
cd ex00 && ./animal
```

## Exercises

### ex00 -- Polymorphism

Demonstrates virtual functions and proper polymorphic behavior through an
`Animal` base class with `Dog` and `Cat` derived classes. A parallel
`WrongAnimal` / `WrongCat` hierarchy shows what happens when `virtual` is
omitted: the base class method is called instead of the derived one.

### ex01 -- Deep Copy (Brain)

Extends the hierarchy by giving `Dog` and `Cat` a dynamically allocated `Brain`
object (containing 100 idea strings). Implements proper copy constructors and
assignment operators to ensure deep copies and prevent memory leaks.

## Key Concepts

- **Virtual functions** -- enabling runtime polymorphism via base class pointers
- **Virtual destructors** -- ensuring derived class destructors are called
- **Deep copy** -- copy constructor and assignment operator for heap-allocated members
- **Orthodox Canonical Form** -- default constructor, copy constructor, assignment operator, destructor
