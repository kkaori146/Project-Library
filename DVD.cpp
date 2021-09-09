//Método

#include "DVD.h"
#include <string>

DVD::DVD() //Nome da classe :: Nome do método
{

}

DVD::DVD(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int regiao, char legendas[])
{
	this->setCodigo(codigo);
	this->setTitulo(titulo);
	this->setDiscos(discos);
	this->setDuracao(duracao);
	this->setRegiao(regiao);
	this->setLegendas(legendas);
}

DVD::~DVD()
{

}

void DVD::setCodigo(unsigned int codigo)
{
	this->codigo = codigo;
}
unsigned int DVD::getCodigo()
{
	return this->codigo;
}

void DVD::setTitulo(char titulo[])
{
	strcpy(this->titulo, titulo);
}
char *DVD::getTitulo()
{
	return this->titulo;
}

void DVD::setDiscos(unsigned int discos)
{
	this->discos = discos;
}
unsigned int DVD::getDiscos()
{
	return this->discos;
}

void DVD::setDuracao(unsigned int duracao)
{
	this->duracao = duracao;
}
unsigned int DVD::getDuracao()
{
	return this->duracao;
}

void DVD::setRegiao(unsigned int regiao)
{
	this->regiao = regiao;
}
unsigned int DVD::getRegiao()
{
	return this->regiao;
}

void DVD::setLegendas(char legendas[])
{
	strcpy(this->legendas, legendas);
}
char* DVD::getLegendas()
{
	return this->legendas;
}

