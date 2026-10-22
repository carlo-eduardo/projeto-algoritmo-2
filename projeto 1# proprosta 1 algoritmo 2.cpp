#include <iostream>

#define MAX 10

using namespace std;

struct curso {
     string nomecurso;
     int vagas;
     int horario;
     int codigo;

};



struct aluno {
     string id_matricula;
     string nome;
     int idade;
     int codigoCurso;
};


void mostrarMenu() {
cout << "################################## MENU ##################################\n";
cout << "1 - para cadastrar o curso.\n";
cout << "2 - para cadastrar o aluno.\n";
cout << "3 - para listar o curso.\n";
cout << "4 - para listar o aluno.\n";
cout << "5 - para buscar alunos por curso.\n";
cout << "6 - para relatorio geral.\n";
cout << "0 - para sair.\n";
cout << "###########################################################################\n\n";
cout << "digite sua opcao: ";
}


void cadastrarcurso(curso vet[], int i) {
    cout << "digite o codigo do curso: ";
    cin >> vet[i].codigo;
    cout << "digite o nome do curso: ";
    cin.ignore();
    getline(cin, vet[i].nomecurso);
    cout << "horario: ";
    cin >> vet[i].horario;
}





void cadastraraluno(aluno vet[], int i) {
    cout << "digite o nome: ";
    cin.ignore();
    getline(cin, vet[i].nome);
    cout << "digite a idade: ";
    cin >> vet[i].idade;
    cout << "digite a matricula: ";
    cin >> vet[i].id_matricula;
    cout << "codigo do aluno: ";
    cin >> vet[i].codigoCurso;
}




void listarcurso(curso vet[], int n) {
 cout << "cursos cadastrado:\n";
 for(int i=0; i<n; i++) {
    cout << "-----------------------------------\n";
    cout << "codigo: " << vet[i].codigo << endl;
    cout << "nome do curso: " << vet[i].nomecurso << endl;
    cout << "carga horaria: " << vet[i].horario  << endl;
    cout << "vaga: " << vet[i].vagas << endl;

   }
    cout << "-----------------------------------\n";

}



void listaraluno(aluno vet[], int n) {
 cout << "alunos cadastrado:\n";
 for(int i=0; i<n; i++) {
    cout << "-----------------------------------\n";
    cout << "nome: " << vet[i].nome << endl;
    cout << "idade: " << vet[i].idade << endl;
    cout << "matricula: " << vet[i].id_matricula << endl;

   }
    cout << "-----------------------------------\n";

}

void buscaraluno(aluno vet[], int n) {
 cout << "alunos buscados por curso:\n";
 for(int i=0; i<n; i++) {
    cout << "-----------------------------------\n";
    cout << "nome do estudante: " << vet[i].nome << endl;
    cout << "codigo do aluno: ";
    cin >> vet[i].codigoCurso;

    cout << "curso: " << vet[i].id_matricula << endl;
   }
    cout << "-----------------------------------\n";

}

void relatorio(aluno vet[], int n) {
 cout << "relatorio geral:\n";
 for(int i=0; i<n; i++) {
    cout << "-----------------------------------\n";
    cout << "nome do aluno: " << vet[i].nome << endl;
    cout << "matriculados: " << vet[i].id_matricula << endl;


   }
    cout << "-----------------------------------\n";

}

int main() {

    curso listaCursos[MAX];
    aluno listaAlunos[MAX];


    int contCursos = 0, contAlunos =0;
    int opcao;

    while(true) {
        mostrarMenu();
        cin >> opcao;

        if(opcao == 0)
            break;

        switch(opcao) {
           case 1:
               cadastrarcurso(listaCursos, contCursos);
               contCursos++;
               break;
           case 2:
               cadastraraluno(listaAlunos, contAlunos);
               contAlunos++;
               break;
           case 3:
                listarcurso(listaCursos, contCursos);
                break;
           case 4:
                listaraluno(listaAlunos, contAlunos);
                break;
           case 5:
                buscaraluno(listaAlunos, contAlunos);
                break;
           case 6:
                //relatorio(relatoriogeral, listaestudante);
                break;
           default:
            cout << "opcao invalida. digite novamente.\n\n";
            break;
        }


    }

return 0;
}
