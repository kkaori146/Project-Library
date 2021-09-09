//Método

#include "Revista.h"
#include <string>

Revista::Revista() //Nome da classe :: Nome do método
{

}

Revista::Revista(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, unsigned int ano, unsigned int mes)
{
	this->setCodigo(codigo);
	this->setTitulo(titulo);
	this->setEditora(editora);
	this->setPaginas(paginas);
	this->setAno(ano);
	this->setMes(mes);
}

Revista::~Revista()
{

}

void Revista::setCodigo(unsigned int codigo)
{
	this->codigo = codigo;
}
unsigned int Revista::getCodigo()
{
	return this->codigo;
}

void Revista::setTitulo(char titulo[])
{
	strcpy(this->titulo, titulo);
}
char *Revista::getTitulo()
{
	return this->titulo;
}

void Revista::setEditora(char editora[])
{
	strcpy(this->editora, editora);
}
char *Revista::getEditora()
{
	return this->editora;
}

void Revista::setPaginas(unsigned int paginas)
{
	this->paginas = paginas;
}
unsigned int Revista::getPaginas()
{
	return this->paginas;
}

void Revista::setAno(unsigned int ano)
{
	this->ano = ano;
}
unsigned int Revista::getAno()
{
	return this->ano;
}

void Revista::setMes(unsigned int mes)
{
	this->mes = mes;
}
unsigned int Revista::getMes()
{
	return this->mes;
}