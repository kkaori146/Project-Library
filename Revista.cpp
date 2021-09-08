//Método

#include "Revista.h"
#include <string>

Revista::Revista() //Nome da classe :: Nome do método
{

}

Revista::Revista(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, unsigned int ano, unsigned int mes)
{
	this->codigo = codigo;
	strcpy(this->titulo, titulo);
	strcpy(this->editora, editora);
	this->paginas = paginas;
	this->ano = ano;
	this->mes = mes;
}

Revista::~Revista()
{

}
