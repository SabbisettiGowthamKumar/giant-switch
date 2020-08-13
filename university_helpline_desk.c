#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int op,a;
	char data[1000];
	struct node{
		char data[500];
		struct node *next;		
	};

	void block(){
				struct node *ABLOCK,*HBLOCK,*PHARMACY,*UBLOCK,*BOYSHOSTEL,*LIBRARY,*GH;
				ABLOCK=(struct node*)malloc(sizeof(struct node));
				HBLOCK=(struct node*)malloc(sizeof(struct node));
				PHARMACY=(struct node*)malloc(sizeof(struct node));
				UBLOCK=(struct node*)malloc(sizeof(struct node));
				BOYSHOSTEL=(struct node*)malloc(sizeof(struct node));
				LIBRARY=(struct node*)malloc(sizeof(struct node));
				GH=(struct node*)malloc(sizeof(struct node));
				 strcpy(ABLOCK->data,"name:____________\ndeps:________,\n     _________,\n     _________\n\nnumber_of_floors:n\nlocation:go straight left right ....\n");
				   ABLOCK->next=HBLOCK;
				   
				   strcpy(HBLOCK->data,"name:____________\ndeps:________,\n     _________,\n     _________\n\nnumber_of_floors:n\nlocation:go straight left right ....\n");
				   HBLOCK->next=PHARMACY;
				   
				   strcpy(PHARMACY->data,"name:____________\ndeps:________,\n     _________,\n     _________\n\nnumber_of_floors:n\nlocation:go straight left right ....\n");
				   PHARMACY->next=UBLOCK;
				   
				   strcpy(UBLOCK->data,"name:____________\ndeps:________,\n     _________,\n     _________\n\nnumber_of_floors:n\nlocation:go straight left right ....\n");
				   UBLOCK->next=BOYSHOSTEL;
				   
				   strcpy(BOYSHOSTEL->data,"name:____________\ntypes:AC/NONAC\nlast sem fee:0000000\nnumber_of_floors:n\nlocation:go straight left right ....\n");
				   BOYSHOSTEL->next=LIBRARY;
				   
				   strcpy(LIBRARY->data,"name:____________\ntypes:digitel/casual\nnumber_of_floors:n\nlocation:go straight left right ....\n");
				   LIBRARY->next=GH;
				   
strcpy(GH->data,"name:____________\ntypes:AC/NON AC\nLAST SEM FEE:00000000\nnumber_of_floors:n\nlocation:go straight left right ....\n");
				   GH->next=NULL;
       do{	
		printf("1:A BLOCK\n2:H BLOCK\n3:PHARMACY\n4:U BLOCK\n5:VIGNAN VIHAR BOYS HOSTEL\n6:LIBRARY\n7:PRIYA DARSHANI GIRLS HOSTEL\n\nenter your choice");
		scanf("%d",&op);
		
		
		switch(op){
			case 1:printf("-------------------------------------------\n");
			       printf("\n*****A_block****\n");
				   printf("%s\n",ABLOCK->data);
				   printf("-------------------------------------------\n");
				   break;
			case 2:printf("-------------------------------------------\n");
			       printf("\n*****H_block****\n");
				   printf("%s",HBLOCK->data);
				   printf("-------------------------------------------\n");
				   break;	   
			case 3:printf("-------------------------------------------\n");
			       printf("\n*****PHARMACY****\n");
				   printf("%s",PHARMACY->data);
				   printf("-------------------------------------------\n");
				   break;
			case 4:printf("-------------------------------------------\n");
			       printf("\n*****U_BLOCK****\n");
				   printf("%s",UBLOCK->data);
				   printf("-------------------------------------------\n");
				   break;
			case 5:printf("-------------------------------------------\n");
			       printf("\n*****boys_hostel****\n");
				   printf("%s",BOYSHOSTEL->data);
				   printf("-------------------------------------------\n");
				   break;	   	   	   
			case 6:printf("-------------------------------------------\n");
			       printf("\n*****LIBRARY****\n");
				   printf("%s",LIBRARY->data);
				   printf("-------------------------------------------\n");
				   break;	 
			case 7:printf("-------------------------------------------\n");
			       printf("\n*****GIRLS_HOSTEL****\n");
				   printf("%s",GH->data);
				   printf("-------------------------------------------\n");
				   break;	  
			default :printf("*___*opps!! wrong input\n");
				    break;  
				}
				 printf("\nenter any number to continue\nexit:-1\n");
				 scanf("%d",&a);
		}while(a!=-1);
	}
	void authoinfo(){
		struct node *civilh,*cseh,*ith,*mechh,*eceh,*biotechh,*bioinfoh,*sandhh,*eeeh,*chemh,*dsa,*vc,*chairman;
						civilh=(struct node*)malloc(sizeof(struct node));
                        cseh=(struct node*)malloc(sizeof(struct node));
                        ith=(struct node*)malloc(sizeof(struct node));
                        mechh=(struct node*)malloc(sizeof(struct node));
                        eceh=(struct node*)malloc(sizeof(struct node));
                        biotechh=(struct node*)malloc(sizeof(struct node));
                        bioinfoh=(struct node*)malloc(sizeof(struct node));
                        sandhh=(struct node*)malloc(sizeof(struct node));
                        eeeh=(struct node*)malloc(sizeof(struct node));
                        chemh=(struct node*)malloc(sizeof(struct node));
                        dsa=(struct node*)malloc(sizeof(struct node));
                        vc=(struct node*)malloc(sizeof(struct node));
                        chairman=(struct node*)malloc(sizeof(struct node));

                   strcpy(civilh->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   civilh->next=cseh;
				   
				   strcpy(cseh->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   cseh->next=ith;

				   strcpy(ith->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   ith->next=mechh;
				   
				   strcpy(mechh->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   mechh->next=eceh;
				   
				   strcpy(eceh->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   eceh->next=biotechh;
				   
				    strcpy(biotechh->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				    biotechh->next=bioinfoh;
				    
				   strcpy(bioinfoh->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   bioinfoh->next=sandhh;
				   
				   strcpy(sandhh->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   sandhh->next=eeeh;
				   
				   strcpy(eeeh->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   eeeh->next=chemh;
 
				   strcpy(chemh->data,"\nHEAD OF THE DEPARTMENT\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   chemh->next=dsa;
				   
				   strcpy(dsa->data,"\nNAME:XXXXXXXXX\nEMAIL:namehod@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   dsa->next=vc;				   

				   strcpy(vc->data,"\nvice chancellor\nNAME:XXXXXXXXXXX\nEMAIL:aaaaaaaaaa@gmail.com\nphone number:0000000000000\n");
				   vc->next=chairman;
				   
				   strcpy(chairman->data,"chairman\nname:XXXXXXXXX\nEMAIL:aaaaaaaaaaa@gmail.com\nphone number:1111111111111\ncabin location:Xblock\n               Xfloor\n               Xroom\n");
				   chairman->next=NULL;		
				   
				  do{
		printf("1:civil engineering hod\n2:cse engineering hod\n3:it engineering hod\n4:mechanical engineering hod\n5:ece engineering hod\n6:biotech engineering hod\n7:bioinfomatics engineering hod\n8:science and humanities hod\n9:eee engineering hod\n10:chemical engineering1 hod\n11:dean student affairs\n12:vice chancellor\n13:chairman\nenter your choice");
		scanf("%d",&op);
		
		
		switch(op){
			case 1:printf("-------------------------------------------\n");
			       printf("*****civil hod****\n");
				   printf("%s",civilh->data);
				   printf("-------------------------------------------\n");
				   break;
			case 2:printf("-------------------------------------------\n");
			       printf("****cse hod****\n");
				   printf("%s",cseh->data);
				   printf("-------------------------------------------\n");
				   break;	   
			case 3:printf("-------------------------------------------\n");
			       printf("*****ith****\n");
				   printf("%s",ith->data);
				   printf("-------------------------------------------\n");
				   break;
			case 4:printf("-------------------------------------------\n");
			       printf("*****mech hod****\n");
				   printf("%s",mechh->data);
				   printf("-------------------------------------------\n");
				   break;
			case 5:printf("-------------------------------------------\n");
			       printf("*****ece hod****\n");
				   printf("%s",eceh->data);
				   printf("-------------------------------------------\n");
				   break;	   	   	   
			case 6:printf("-------------------------------------------\n");
			       printf("\n*****biotech hod****\n");
				   printf("%s",biotechh->data);
				   printf("-------------------------------------------\n");
				   break;	 
			case 7:printf("-------------------------------------------\n");
			       printf("\n*****bio infomatics hod****\n");
				   printf("%s",bioinfoh->data);
				   printf("-------------------------------------------\n");
				   break;	  
			case 8:printf("-------------------------------------------\n");
			       printf("\n*****science and humanitiesHOD***\n");
				   printf("%s",sandhh->data);
				   printf("-------------------------------------------\n");
				   break;	   
			case 9:printf("-------------------------------------------\n");
			       printf("\n*****eee hod****\n");
				   printf("%s",eeeh->data);
				   printf("-------------------------------------------\n");
				   break;	   
			case 10:printf("-------------------------------------------\n");
			       printf("\n*****chemical hod****\n");
				   printf("%s",chemh->data);
				   printf("-------------------------------------------\n");
				   break;	   
			case 11:printf("-------------------------------------------\n");
			        printf("\n******dean student affairs***\n");
				    printf("%s",dsa->data);
				    printf("-------------------------------------------\n");
				    break;	   
			case 12:printf("-------------------------------------------\n");
			        printf("\n*****VC****\n");
				    printf("%s",vc->data);
				    printf("-------------------------------------------\n");
				    break;	   
			case 13:printf("-------------------------------------------\n");
			        printf("\n*****chairman****\n");
				    printf("%s",chairman->data);
				    printf("-------------------------------------------\n");
				    break;	   
			default :printf("*__*opps!! wrong input\n");
				    break;  
				}
				 printf("\nenter any number to continue\nexit:-1\n");
				 scanf("%d",&a);
		}while(a!=-1);  		   		
	}
void depinfo(){
				struct node *civil,*cse,*it,*mech,*ece,*biotech,*bioinfo,*sandh,*eee,*chem;
						civil=(struct node*)malloc(sizeof(struct node));
                        cse=(struct node*)malloc(sizeof(struct node));
                        it=(struct node*)malloc(sizeof(struct node));
                        mech=(struct node*)malloc(sizeof(struct node));
                        ece=(struct node*)malloc(sizeof(struct node));
                        biotech=(struct node*)malloc(sizeof(struct node));
                        bioinfo=(struct node*)malloc(sizeof(struct node));
                        sandh=(struct node*)malloc(sizeof(struct node));
                        eee=(struct node*)malloc(sizeof(struct node));
                        chem=(struct node*)malloc(sizeof(struct node));
                  

                   strcpy(civil->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				   civil->next=cse;
				   
				   strcpy(cse->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				   cse->next=it;

				   strcpy(it->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				   it->next=mech;
				   
				   strcpy(mech->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				   mech->next=ece;
				   
				   strcpy(ece->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				   ece->next=biotech;
				   
				    strcpy(biotech->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				    biotech->next=bioinfo;
				    
				   strcpy(bioinfo->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				   bioinfo->next=sandh;
				   
				   strcpy(sandh->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				   sandh->next=eee;
				   
				   strcpy(eee->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				   eee->next=chem;
 
				   strcpy(chem->data,"\nLAST YEAR \nstrength:-------\nplacement percentage:------\nstudent achievements:--------------\neligibility criteria:--------\n");
				   chem->next=NULL;
				   
				  do{
		printf("1:civil department\n2:cse department\n3:it department\n4:mechanical department\n5:ece department\n6:biotech department\n7:bioinfomatics department\n9:eee department\n10:chemical department\nenter your choice");
		scanf("%d",&op);
		
		
		switch(op){
			case 1:printf("-------------------------------------------\n");
			       printf("*****civil department****\n");
				   printf("%s",civil->data);
				   printf("-------------------------------------------\n");
				   break;
			case 2:printf("-------------------------------------------\n");
			       printf("****cse department****\n");
				   printf("%s",cse->data);
				   printf("-------------------------------------------\n");
				   break;	   
			case 3:printf("-------------------------------------------\n");
			       printf("*****it department****\n");
				   printf("%s",it->data);
				   printf("-------------------------------------------\n");
				   break;
			case 4:printf("-------------------------------------------\n");
			       printf("*****mech department****\n");
				   printf("%s",mech->data);
				   printf("-------------------------------------------\n");
				   break;
			case 5:printf("-------------------------------------------\n");
			       printf("*****ece department****\n");
				   printf("%s",ece->data);
				   printf("-------------------------------------------\n");
				   break;	   	   	   
			case 6:printf("-------------------------------------------\n");
			       printf("*****biotech department****\n");
				   printf("%s",biotech->data);
				   printf("-------------------------------------------\n");
				   break;	 
			case 7:printf("-------------------------------------------\n");
			       printf("*****bioinfomatics department****\n");
				   printf("%s",bioinfo->data);
				   printf("-------------------------------------------\n");
				   break;	  
			case 8:printf("\nwrong input\n");
			      /*printf("-------------------------------------------\n");
			       printf("*****s and h department***\n");
				   printf("%s",sandh->data);
				   printf("-------------------------------------------\n");*/
				   break;	   
			case 9:printf("-------------------------------------------\n");
			       printf("*****eee department****\n");
				   printf("%s",eee->data);
				   printf("-------------------------------------------\n");
				   break;	   
			case 10:printf("-------------------------------------------\n");
			        printf("\n*****chemical department****\n");
				    printf("%s",chem->data);
				    printf("-------------------------------------------\n");
				    break;	   
 
			default :printf("*__*opps!! wrong input\n");
				    break;  
				}
				 printf("\nenter any number to continue\nexit:-1\n");
				 scanf("%d",&a);
		}while(a!=-1);  	

	}

	int main(){
		int o,again;
		//system("OA");
		printf("\n*****************************WELCOME TO VIGNAN's UNIVERSITY**********************************\n");
		do{
			printf("----------------------------------------------------\n");
		printf("enter 1 for block address\nenter 2 for authority information\nenter 3 for department information\n");
		printf("---------------------------------------------------------\n");
		
		scanf("%d",&o);
		switch(o){
			case 1:block();
			break;
			case 2:authoinfo();
			break;
			case 3:depinfo();
			break;
			default :printf("\nwrong input\n");
			break;
		}
		printf("\nenter any number to see block address\tor\n authority information\tor\ndepartment information\n and -1 for exit\n");
		scanf("%d",&again);
	}while(again!=-1);
		  
	return 0;
	}
