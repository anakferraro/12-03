#include <stdio.h>

int main() {
    float idade;
    
    printf ("Digite a idade: ");
    scanf("%f", &idade);
    
    puts( (idade> 60) ? "Pode ser atendido" : "Não pode ser atendido");
    
    return 0;
    
}
