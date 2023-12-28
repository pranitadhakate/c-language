#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
	typedef struct pokemon{
	int hp;
	int speed;
	int attack;
	int tier;
	int name[15];
	}pokemon;
	typedef struct legendarypokemon{
	pokemon normal;
	char ability[100];
	}legendarypokemon;
	typedef struct godpokemon{
	legendarypokemon legend;
	int specialattack;
	}godpokemon;
	godpokemon arceus;
	arceus.specialattack=300;
	strcpy(arceus.legend.ability,"turn Anyone to stone");
	arceus.legend.normal.attack=500;
	
	
	
	legendarypokemon mewtwo;
	strcpy(mewtwo.ability,"Pressure");
	mewtwo.normal.hp=150;
	mewtwo.normal.attack=180;
	strcpy(mewtwo.normal.name,"mewtwo");
	mewtwo.normal.speed=180;
	mewtwo.normal.tier='5';
	return 0;
}
