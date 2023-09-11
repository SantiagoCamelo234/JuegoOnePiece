#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;


int main (){
	
	srand(time(NULL));
	int personaje, n, vidaEnemigo = 3, vidaJugador = 3, ataqueJugador;
	int personajeRandom = 1;
	int ataqueEnemigo = 1; 
	// genera el enemigo
	personajeRandom = rand() % 5;
	//genera el ataque del enemigo
	ataqueEnemigo = rand() % 5;
	cout << "Bienvenido al juego de One Piece"<< endl;
	
	
	
	// ciclo que determina cuantas veces se va a jugar
	
		
	// seleccion de personajes
	cout << "Elije tu heroe: " << endl;
	cout << "1. Zoro Roronoa" << endl;
	cout << "2. Monkey D. Luffy" << endl;
	cout << "3. Sanji" << endl;
	cout << "4. Nico Robin" << endl;
	
		
 	cin >> personaje;
 	
 	// lo que pasa en caso de cada personaje al ser elegido
 	
 	switch(personaje){
 		case 1: 
 		// zoro
 			cout << "Has seleccionado a Zoro Roronoa con una recompensa de $1,111,000,000 de berries";
 			// seleccion de enemigo
 			/*1 aokiji
			 2 kaido
			 3 barba negra
			 4 mihawk*/
 			if(personajeRandom == 1){
			 cout << "Tu enemigo es Aokiji" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Estilo del zorro de fuego " << endl;
			 	cout << "2. Cañon Fenix " << endl;
			 	cout << "3. Estilo de nueve espadas" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Aokiji" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Aokiji a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 if(personajeRandom == 2){
			 cout << "Tu enemigo es Kaido" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Estilo del zorro de fuego " << endl;
			 	cout << "2. Cañon Fenix " << endl;
			 	cout << "3. Estilo de nueve espadas" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Kaido" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Kaido a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 
			 if(personajeRandom == 3){
			 cout << "Tu enemigo es Barba Negra" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Estilo del zorro de fuego " << endl;
			 	cout << "2. Cañon Fenix " << endl;
			 	cout << "3. Estilo de nueve espadas" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Barba Negra" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Barba Negra a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 if(personajeRandom == 4){
			 cout << "Tu enemigo es Mihawk" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Estilo del zorro de fuego " << endl;
			 	cout << "2. Cañon Fenix " << endl;
			 	cout << "3. Estilo de nueve espadas" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Mihawk" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Mihawk a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
 			
 			break;
 		case 2: 
 			cout << "Has seleccionado a Monkey D Luffy con una recompensa de $3,000,000 de berries";
 			
 			if(personajeRandom == 1){
			 cout << "Tu enemigo es Aokiji" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Gear Second" << endl;
			 	cout << "2. Gear Five " << endl;
			 	cout << "3. Gear third" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Aokiji" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Aokiji a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 
			 if(personajeRandom == 2){
			 cout << "Tu enemigo es Kaido" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Gear Second" << endl;
			 	cout << "2. Gear Five " << endl;
			 	cout << "3. Gear third" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Kaido" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Kaido a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 if(personajeRandom == 3){
			 cout << "Tu enemigo es Barba Negra" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Gear Second" << endl;
			 	cout << "2. Gear Five " << endl;
			 	cout << "3. Gear third" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Barba Negra" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Barba Negra a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
 			
 			break;
 			
 			if(personajeRandom == 4){
			 cout << "Tu enemigo es Mihawk" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Gear Second" << endl;
			 	cout << "2. Gear Five " << endl;
			 	cout << "3. Gear third" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Mihawk" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Mihawk a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 
 		case 3: 
 			cout << "Has seleccionado a Sanji con una recompensa de $1,032,000 de berries";
 			
 			if(personajeRandom == 1){
			 cout << "Tu enemigo es Aokiji" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Pierna Infernal" << endl;
			 	cout << "2. Ifrit Jambe " << endl;
			 	cout << "3. Rokushiki" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Aokiji" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Aokiji a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 
			 if(personajeRandom == 2){
			 cout << "Tu enemigo es Kaido" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Pierna Infernal" << endl;
			 	cout << "2. Ifrit Jambe " << endl;
			 	cout << "3. Rokushiki" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Kaido" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Kaido a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 if(personajeRandom == 3){
			 cout << "Tu enemigo es Barba Negra" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Pierna Infernal" << endl;
			 	cout << "2. Ifrit Jambe " << endl;
			 	cout << "3. Rokushiki" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Barba Negra" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Barba Negra a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 if(personajeRandom == 4){
			 cout << "Tu enemigo es Mihawk" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Pierna Infernal" << endl;
			 	cout << "2. Ifrit Jambe " << endl;
			 	cout << "3. Rokushiki" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Mihawk" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Mihawk a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 
			 
			 
			 
			 }
			 
			 
			 
			 
			 
 			break;
 		case 4:
 			cout << "Has seleccionado a Nico Robin con una recompensa de $930,000,000 de berries";
 			
 			if(personajeRandom == 1){
			 cout << "Tu enemigo es Aokiji" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Cien Fleur" << endl;
			 	cout << "2. Dieciseis Fleur " << endl;
			 	cout << "3. Doce Fleur" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Aokiji" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Aokiji a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
				
				
			 if(personajeRandom == 2){
			 cout << "Tu enemigo es Kaido" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Cien Fleur" << endl;
			 	cout << "2. Dieciseis Fleur " << endl;
			 	cout << "3. Doce Fleur" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Kaido" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Kaido a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
			 
		}
		
		if(personajeRandom == 3){
			 cout << "Tu enemigo es Barba Negra" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Cien Fleur" << endl;
			 	cout << "2. Dieciseis Fleur " << endl;
			 	cout << "3. Doce Fleur" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Barba Negra" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Barba Negra a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
			 
		}
		
		if(personajeRandom == 4){
			 cout << "Tu enemigo es Mihawk" << endl;
			 // ciclo que se repite hasta que los combatientes no tengan vida 
			 while (vidaEnemigo > 0 && vidaJugador > 0){
			 	cout << "Que ataque vas a realiazar para vencerlo? " << endl;
			 	cout << "1. Cien Fleur" << endl;
			 	cout << "2. Dieciseis Fleur " << endl;
			 	cout << "3. Doce Fleur" << endl;
			 
			 	cin >> ataqueJugador; 
			 		// poder de los ataques y disminucion de vida
			 		if (ataqueJugador > ataqueEnemigo){
			 			cout << "Genial tu ataque fue mas poderoso que el de Mihawk" << endl;
			 			vidaEnemigo--;
					 }
			 			
					else if(ataqueJugador < ataqueEnemigo){
						cout << "Que mal! Mihawk a hecho un ataque mas poderoso que el tuyo" << endl;
						vidaJugador--;
					}
						
			 
			 
			 
			 }
			 
			 
			 // definicion de la partida gana o pierde
			 
			 if(vidaJugador == 0 & vidaEnemigo > 0)
			 	cout << "Persite!" << endl;
			else if(vidaEnemigo == 0 & vidaJugador > 0){
				cout << "Ganaste;" << endl;
			}
		}
 			break;
 		default: 
 			cout << "Debes seleccionar un mugiwara";
 			break;
	 }
	 
	 
	 
	
	
	
	
 	
 	
	

}
	



getch();
return 0;
}

