//método

#include "CD.h"
#include <string>

CD::CD() //Nome da classe :: Nome do método
{

}

CD::CD(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int faixas)
{
	this->setCodigo(codigo);
	this->setTitulo(titulo);
	this->setDiscos(discos);
	this->setDuracao(duracao);
	this->setFaixas(faixas);
}

CD::~CD()
{

}
void CD::setCodigo(unsigned int codigo)
{
	this->codigo = codigo;
}
unsigned int CD::getCodigo()
{
	return this->codigo;
}

void CD::setTitulo(char titulo[])
{
	strcpy(this->titulo, titulo);
}
char *CD::getTitulo()
{
	return this->titulo;
}

void CD::setDiscos(unsigned int discos)
{
	this->discos = discos;
}
unsigned int CD::getDiscos()
{
	return this->discos;
}

void CD::setDuracao(unsigned int duracao)
{
	this->duracao = duracao;
}
unsigned int CD::getDuracao()
{
	return this->duracao;
}

void CD::setFaixas(unsigned int faixas)
{
	this->faixas = faixas;
}
unsigned int CD::getFaixas()
{
	return this->faixas;
}

