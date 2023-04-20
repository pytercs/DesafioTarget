#include <stdio.h>
#include <stdlib.h>
#include <iostream>

double encontro, velocidade_carro, velocidade_caminhao, velocidadeMedia_caminhao, tempo_caminhao, tempoTotal_caminhao, distancia_cidades;

int main(){
	setlocale(LC_ALL, "portuguese");
		
	printf("Dois veículos (um carro e um caminhão) saem respectivamente de cidades opostas pela mesma rodovia.\n");
	printf("O carro de Ribeirão Preto em direção a Franca, a uma velocidade constante de 110 km/h\n");
	printf("e o caminhão de Franca em direção a Ribeirão Preto a uma velocidade constante de 80 km/h.\n");
	printf("Quando eles se cruzarem na rodovia, qual estará mais próximo a cidade de Ribeirão Preto?\n");
	printf("Considerar a distância de 100km entre a cidade de Ribeirão Preto <-> Franca.\n");
	printf("Considerar 2 pedágios como obstáculo e que o caminhão leva 5 minutos a mais para passar em cada um deles\n");
	printf("e o carro possui tag de pedágio (Sem Parar). Explique como chegou no resultado.\n\n");
	
	velocidade_carro = 110;
	velocidade_caminhao = 80;
	distancia_cidades = 100;
	
	printf("O ponto de refêrencia de encontro é em Ribeirão Preto, então a equação horária do carro é:\n");
	printf("distancia_carro = velocidade_carro x tempo_carro\n");
	printf("E como o caminhão está 100km longe do ponto de refêrencia, a equação horária do caminhão será:\n");
	printf("distancia_caminhao = 100km - velocidade_caminhao x tempo_caminhao\n\n");
	
	printf("Sabemos que o caminhão faz 80km/h até Ribeirão Preto mas como no caminho ele faz duas paradas de 5 minutos,\n");
	printf("devemos descobrir a nova velocidade até o ponto de referência que é:\n");
	tempo_caminhao = distancia_cidades/velocidade_caminhao;
	printf("tempo_caminhao = 100km/h / velocidade_caminhao (80km/h): %.2f",tempo_caminhao);printf("h\n");
	
	printf("Como ele perde 10 minutos ( 0,17h ) nos pedágios a velocidade média do caminhão será:\n");
	tempoTotal_caminhao = tempo_caminhao +  0.17;
	velocidadeMedia_caminhao = distancia_cidades/tempoTotal_caminhao;
	printf("velocidade_caminhao = 100km/h /(1,25 + 0,17 = 1,42h): %.2f",velocidadeMedia_caminhao);printf("km/h\n\n");
	
	printf("Igualando as equações e tirando o tempo, fica dessa forma: \n");
	printf("tempo_carro = distancia_carro / velocidade_carro \n");
	printf("tempo_caminhao = distancia_caminhao - 100km/h / velocidade_caminhao \n");
	printf("E como queremos saber o encontro entre os dois, \n");
	printf("então  distancia_carro = distancia_caminhao que nos dá a seguinte equação: \n\n");
	printf("encontro / velocidade_carro = encontro - 100km/h / - velocidade_caminhao\n\n");
	printf("Simplicando: - velocidade_caminhao x encontro = velocidade_carro x encontro - velocidade_carro x 100km/h\n");
	printf("Simplificando mais uma vez: encontro = velocidade_carro x 100km/h / velocidade_carro + velocidade_caminhao\n\n");
	encontro = ((velocidade_carro * distancia_cidades)/(velocidade_carro + velocidadeMedia_caminhao));
	printf("Ou seja, o carro e o caminhão se cruzam na mesma distância de Ribeirão Preto, a %.2f",encontro);printf("km da cidade.");

	return(0);	
}
