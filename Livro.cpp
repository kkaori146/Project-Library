//método

#include "Livro.h"
#include <string>

Livro::Livro() //Nome da classe :: Nome do método
{

}

Livro::Livro(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, char isbn[])
{
	this->setCodigo(codigo);
	this->setTitulo(titulo);
	this->setEditora(editora);
	this->setPaginas(paginas);
	this->setIsbn(isbn);
}

Livro::~Livro()
{

}

void Livro::setCodigo(unsigned int codigo)
{
	this->codigo = codigo;
}
unsigned int Livro::getCodigo()
{
	return this->codigo;
}

void Livro::setTitulo(char titulo[])
{
	strcpy(this->titulo, titulo);
}
char *Livro::getTitulo()
{
	return this->titulo;
}

void Livro::setEditora(char editora[])
{
	strcpy(this->editora, editora);
}
char *Livro::getEditora()
{
	return this->editora;
}

void Livro::setPaginas(unsigned int paginas)
{
	this-> paginas = paginas;
}
unsigned int Livro::getPaginas()
{
	return this->paginas;
}

void Livro::setIsbn(char isbn[])
{
	strcpy(this->isbn, isbn);
}
char *Livro::getIsbn()
{
	return this->isbn;
}
