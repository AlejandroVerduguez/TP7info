
struct datos {
        long legajo;
        char apellido[31];
        char nombre[31];
    };

struct datos *cargar(struct datos *alumno);
void ordenarPorApellido(struct datos *alumnos);
int contarAlumnos(struct datos *alumnos);