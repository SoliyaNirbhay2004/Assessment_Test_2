#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

class game
{
	// Private members for storing player's name, rounds, choices, and scores
	string name;
	int round,choice,c_choice,s_score,c_score,i;
	
	public :
		
		// Function to get player's name
		void get_name()
		{
			cout<<"\n\n *_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _*";
			cout<<"\n\n                         NAME ";
			cout<<"\n\n *_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _*";
			
			cout<<"\n\n Enter your Name : ";
			cin>>name;
		}
		
		// Function to get the number of rounds from the player
		void game_round()
		{
			cout<<"\n\n\n *_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _*";
			cout<<"\n\n                        ROUND ";
			cout<<"\n\n *_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _*";
			
			cout<<"\n\n System How Many Rounds You Want To Play? :";
			cin>>round;	
		}
		
		 // Function to play the game
		void play_game()
		{
			cout<<"\n\n\n *_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _*";
			cout<<"\n\n                        GAME ";
			cout<<"\n\n *_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _**_ _*_ _*_ _*";
			
			s_score = 0;     // Initialize player's score
			c_score = 0;     // Initialize computer's score
			
			for(i=1;i<=round;i++)
			{
				cout<<"\n\n Round No : "<<i<<"/"<<round;
				
				// Display choices
				cout<<"\n\n 1) ROCK  ";
				cout<<"\n\n 2) PAPER  ";
				cout<<"\n\n 3) SCISSOR ";
				
				cout<<"\n\n\n -> Select Your Choice : ";
				cin>>choice;
				
				// Generate computer's random choice
				srand(time(0));
				c_choice = (rand()%3)+1;
				cout<<"\n\n -> Computer Choice is : "<<c_choice;
				cout<<"\n\n ";
				
				// Determine the result of the round
				if(choice==c_choice)
				{
					cout<<"\n Draw ";
				}
				else if(choice==1 && c_choice==2)
				{
					c_score++;
					cout<<"\n WIN Computer ";
				}
				else if(choice==1 && c_choice==3)
				{
					s_score++;
					cout<<"\n WIN "<<name;	
				}
				else if(choice==2 && c_choice==1)
				{
					s_score++;
					cout<<"\n WIN "<<name;	
				}
				else if(choice==2 && c_choice==3)
				{
					c_score++;
					cout<<"\n WIN Computer ";
				}
				else if(choice == 3 && c_choice==1)
				{
					c_score++;
					cout<<"\n WIN Computer ";
				}
				else if(choice==3 && c_choice==2)
				{
					s_score++;
					cout<<"\n WIN "<<name;
				}	
				
				cout<<"\n\n_* "<<name<<"'s Score = "<<s_score;
				cout<<"\n\n_* Computer Score = "<<c_score;
				cout<<"\n\n";
			}
		}
		
		 // Function to display the final result
		void result()
		{
			if(s_score==c_score)
			{
				cout<<"\n\n GAME DRAW ";
			}
			else if(s_score>c_score)
			{
				cout<<"\n\n GAME WIN ";
			}
			else 
			{
				cout<<"\n\n GAME LOSS ";
			}
		}
};

main()
{
	game g;
	g.get_name();       // Get player's name
	g.game_round();     // Get number of rounds
	g.play_game();      // Play the game
	g.result();         // Display the result
}
