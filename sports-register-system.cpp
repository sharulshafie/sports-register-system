#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
	char name[45];
	double ic;
	double matrix;
	
	char course;
	char displaycr [80];           // display course
	int crct;                      // course counter 
	int crlimit = 1;               // course limit
	
	char gender;
	char displaygdr [80];          // display gender
	int gdrct;                     // gender counter 
	int gdrlimit = 1;              // gender limit
	
	char sport;                    // sports selection 
	char displayspt[80];           // display sport 
	char position;                 // position in sports selected
	char position2[80]; 		   // display position
	int count = 0, limit = 1;      // counter and limitor for sport
	int count2 = 0, limit2 = 1;    // counter and limitor for position
	
	char size;    				   // shirt size selection 
	char displaysize [80]; 		   // display shirt size 
	int price; 					   // shirt price 
	int sizeprice = 0, limit4 = 1; // couter(shirt price) and limitor for shirt size
	
	char sleeve;
	char sleeve2 [80];             // display sleeve lenght
	int sleeveprice;               // sleeve price 
	int count3 = 0, limit3 = 1;    // counter and limitor for sleeve lenght
	
	char grp; 					   // group 
	char displaygrp [80];          // display group
	int grpct = 0, grplimit = 1;   // counter and limitor for group
	
	int totalpayment; 			   // calculate total price for shirt price and sleeve price
	
	char app;  					   // approval variable
	char displayapp [80];          // display gender
	int appct = 0;                 // gender counter 
	int applimit = 1;              // gender limit
	
	{
		cout << "\nWELCOME TO THE SPORT MANAGEMENT CLUB " << endl;
		cout << "\nPLEASE FILL IN YOUR DETAILS " << endl;
		cout << "\nName : ";
		cin.getline(name,45);
		
		while (gdrct < gdrlimit)
		{
			cout << "Please select your gender (M|F) : ";
			cin >> gender;
		
			switch (gender)
			{
				case 'm':
				case 'M': gdrct++;
			          strcpy (displaygdr, "Male");
			          cout << "\nGender : " << displaygdr << endl;
			          break;
				case 'f':
				case 'F': gdrct++;
			          strcpy (displaygdr, "Female");
			          cout << "\nGender : " << displaygdr << endl;
			          break;
				default : cout << "\nWRONG CODE!" << endl; 
			}
		}
		
		cout << "\nIC Number : ";
		cin >> ic;
		cout << "\nMatrix ID : ";
		cin >> matrix;
		
		while (crct < crlimit)
		{
			cout << "\n A : AM111 \n B : BM110 \n C : BM111 \n D : CS110 \n E : CS111 \nPlease select your Course Code : ";
			cin >> course;
			
			switch (course)
			{
				case 'a':
				case 'A': crct++;
					strcpy (displaycr, "AM111");
					cout << "Course Code : " << displaycr << endl;
					break;
				case 'b':
				case 'B': crct++;
					strcpy (displaycr, "BM110");
					cout << "Course Code : " << displaycr << endl;
					break;
				case 'c':
				case 'C': crct++;
					strcpy (displaycr, "BM111");
					cout << "Course Code : " << displaycr << endl;
					break;
				case 'd':
				case 'D': crct++;
					strcpy (displaycr, "CS110");
					cout << "Course Code : " << displaycr << endl;
					break;
				case 'e':
				case 'E': crct++;
					strcpy (displaycr, "CS111");
					cout << "Course Code : " << displaycr << endl;
					break;
				default : cout << "\nWRONG CODE!" << endl; 
			}
		}
	}
	
	{
		while (count < limit)
		{
			cout << "\nWhich sports do you want to register? \n A : Football \n B : Netball \n C : Futsal \n D : Tennis \n E : Badminton \n F : Pingpong \nPlease enter your code :  ";
			cin >> sport ;
		
			switch (sport)
			{
				case 'a':
				case 'A': count++;
		          strcpy (displayspt, "Football");
		          
				  while (count2 < limit2)
				  {
				  	cout << "\n F : Forward \n M : Midfielder \n D : Defender \n G : Goalkeeper \nPlease select your position : ";
				  	cin >> position;
				  
				 	 switch (position)
				 	 {
				  	case 'f':
				  	case 'F': count2++;
				  			  strcpy(position2, "Forward Position");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'm':
				  	case 'M': count2++;
					  		  strcpy(position2, "Midfielder Position");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'd':
				  	case 'D': count2++;
					  		  strcpy(position2, "Defender Position");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'g':
				  	case 'G': count2++;
					  		  strcpy(position2, "Goalkeeper Position");
					  		  cout << position2 << endl;
				  			  break;
				  	default : cout << "\nWRONG CODE!"<< endl;
				  	}
				  }
				  break;
				  
				case 'b':
				case 'B': count++;
		          strcpy (displayspt, "Netball");
		
				  while ( count2 < limit2)
				  {
				  	cout << "\n F : Forward \n M : Midfielder \n D : Defender \n G : Goalkeeper \nPlease select your position : ";
				  	cin >> position;
				  
				  	switch (position)
				  	{
				  	case 'f':
				  	case 'F': count2++;
					  		  strcpy(position2, "Forward Position");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'm':
				  	case 'M': count2++;
					  		  strcpy(position2, "Midfielder Position");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'd':
				  	case 'D': count2++;
					  		  strcpy(position2, "Defender Position");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'g':
				  	case 'G': count2++;
					  		  strcpy(position2, "Goalkeeper Position");
					  		  cout << position2 << endl;
				  			  break;
				  	default : cout << "\nWRONG CODE!"<< endl;
				  			  
				  	}
				  }
				  break;
				case 'c':
				case 'C': count++;
		          strcpy (displayspt, "Futsal");
		
				while (count2 < limit2)
				{
				
				  cout << "\n F : Forward \n M : Midfielder \n D : Defender \n G : Goalkeeper \nPlease select your position : ";
				  cin >> position;
				  
				  switch (position)
				  {
				  	case 'f':
				  	case 'F': count2++;
					  		  strcpy(position2, "Forward Position");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'm':
				  	case 'M': count2++;
					  		  strcpy(position2, "Midfielder Position");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'd':
				  	case 'D': count2++;
					  		  strcpy(position2, "Defender Position");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'g':
				  	case 'G': count2++;
					  		  strcpy(position2, "Goalkeeper Position");
					  		  cout << position2 << endl;
				  			  break;
				  	default : cout << "\nWRONG CODE!"<< endl;	  
				  }
				}
				  
				break;
				case 'd':
				case 'D': count++;
		          strcpy (displayspt, "Tennis");
				  
				  while (count2 < limit2)
				  {
				  
				  	cout << "\n S : Single \n D : Double \n Do you prefer single or double? : ";
				  	cin >> position;
				  
				 	 switch (position)
				  	{
				  	case 's':
				  	case 'S': count2++;
				  	          strcpy(position2, "Single Player");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'd':
				  	case 'D': count2++;
				  	          strcpy(position2, "Played Double");
					  		  cout << position2 << endl;
				  			  break;
				  	default : cout << "\nWRONG CODE!" << endl;
				  	
				  	}
				  }
				  break;
				case 'e':
				case 'E': count++;
				  strcpy (displayspt, "Badminton");
		
				  cout << "\n S : Single \n D : Double \n Do you prefer single or double? : ";
				  cin >> position;
				  
				  switch (position)
				  {
				  	case 's':
				  	case 'S': count2++;
				  	          strcpy(position2, "Single Player");
					  		  cout << position2 << endl;
				  			  break;
				  	case 'd':
				  	case 'D': count2++;
				  			  strcpy(position2, "Played Double");
					  		  cout << position2 << endl;
				  			  break;
				  	default : cout << "\nWRONG CODE!" << endl;
				  }
				  
				  break;
				case 'f':
				case 'F': count++;
				  strcpy (displayspt, "Pingpong");
		
				  strcpy(position2, "Pingpong Player");
				  cout << position2 << endl;
				  break;
					default : cout << "\nWRONG CODE!" << endl;
			}
		          
		}
	}	
	
	{
		while (sizeprice < limit4)
		{
			cout << "\n A : Extra Small \n B : Small \n C : Medium \n D : Large \n E : Extra Large \nPlease select your shirt size : ";
			cin >> size;
		
			switch (size)
			{
			case 'a':
			case 'A': sizeprice++;
			          price = 20;
			          strcpy (displaysize, "Extra Small");
			          cout << "Your shirt size is " << displaysize << " that will be RM" << price << endl;
				      break;
			case 'b':
			case 'B': sizeprice++;
			          price = 22;
			          strcpy (displaysize, "Small");
			          cout << "Your shirt size is " << displaysize << " that will be RM" << price << endl;
				      break;
			case 'c':
			case 'C': sizeprice++;
			          price = 24;
			          strcpy (displaysize, "Medium");
			          cout << "Your shirt size is " << displaysize << " that will be RM" << price << endl;
				    break;
			case 'd':
			case 'D': sizeprice++;
			          price = 26;
			          strcpy (displaysize, "Large");
			          cout << "Your shirt size is " << displaysize << " that will be RM" << price << endl;
				      break;
			case 'e':
			case 'E': sizeprice++;
			          price = 28;
			          strcpy (displaysize, "Extra Large");
			          cout << "Your shirt size is " << displaysize << " that will be RM" << price << endl;
				      break;
			default : 
		              cout << "\nWRONG CODE!" << endl;
			}		
		}	
	}	
	
	{
		while (count3 < limit3 )
		{
			cout << "\n S : Short Sleeve \n L : Long Sleeve \nPlease enter your Sleeve Size : ";
			cin >> sleeve;
			
			switch (sleeve)
			{
			case 'l':
			case 'L': count3++;
				      sleeveprice = 5;
					  strcpy (sleeve2, "Long Sleeve");
					  cout << "You have selected " << sleeve2 << endl;
					  cout << "Sleeve shirt fee : RM" << sleeveprice << endl;
					  break;
			case 's':
			case 'S': count3++;
				      sleeveprice = 0;
				      strcpy (sleeve2, "Short Sleeve");
					  cout << "You have selected " << sleeve2 << endl;
					  cout << "Sleeve shirt fee : RM" << sleeveprice << endl;
					  break;
			default : 
					  cout << "\nWRONG CODE!" << endl;
			}
		}
	}
	
	{
		while (grpct < grplimit)
		{
			cout << "\n A : Group A \n B : Group B \n C : Group C \nPlease select your Group : ";
			cin >> grp;
		
			switch (grp)
			{
			case 'a':
			case 'A': grpct++;
			          strcpy (displaygrp, "Group A");
			          cout << "You have selected " << displaygrp << endl;
			          break;
			case 'b':
			case 'B': grpct++;
			          strcpy (displaygrp, "Group B");
			          cout << "You have selected " << displaygrp << endl;
			          break;
			case 'c':
			case 'C': grpct++;
			          strcpy (displaygrp, "Group C");
			          cout << "You have selected " << displaygrp << endl;
			          break;
			default : cout << "\nWRONG CODE!" << endl;
			}
		}
	}
	
	{
		totalpayment = price + sleeveprice;
		
		cout << "\nName : " << name << endl;
		cout << "Payment Fee : RM" << totalpayment << endl;
		cout << "Selected Sport : " << displayspt << endl;
		cout << "Position : " << position2 << endl;
		cout << "Shirt Size : " << displaysize << endl;
		cout << "Sleeve lenght : " << sleeve2 << endl;
		cout << "Group : " << displaygrp << endl;
		
	}
	
	{
		while (appct < applimit)
		{
			cout << "\nTHIS QUESTION IS FOR THE MANAGER ONLY! \nDo you accept the approval? (Y|N) :";
			cin >> app;
		
			switch (app)
			{
				case 'y':
				case 'Y': appct++;
			          strcpy (displayapp, "Accepted");
			          cout << "\nApproval : " << displayapp << endl;
			          cout << "Total Fee : RM" << totalpayment << endl;
			          break;
				case 'n':
				case 'N': appct++;
			          strcpy (displayapp, "Disaccepted");
			          cout << "\nApproval : " << displayapp << endl;
			          cout << "No Payment Needed" << endl;
			          break;
				default : cout << "\nWRONG CODE!" << endl; 
			}
		}
	}
	
	{
		cout << "\nEND OF THE PROGRAME" << endl;
	}

return 0;
}
