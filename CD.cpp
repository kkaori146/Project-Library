//m�todo

#include "CD.h"
#include <string>

CD::CD() //Nome da classe :: Nome do m�todo
{

}

CD::CD(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int faixas)
{
	this->codigo = codigo;
	strcpy(this->titulo, titulo);
	this->discos = discos;
	this->duracao = duracao;
	this->faixas = faixas;
}

CD::~CD()
{

}