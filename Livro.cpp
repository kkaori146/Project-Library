//m�todo

#include "Livro.h"
#include <string>

Livro::Livro() //Nome da classe :: Nome do m�todo
{

}

Livro::Livro(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, char isbn[]);
{
	this->codigo = codigo;
	strcpy(this->titulo, titulo);
	strcpy(this->editora, editora);
	this->paginas = paginas;
	strcpy(this->isbn, isbn);
}

Livro::~Livro()
{

}