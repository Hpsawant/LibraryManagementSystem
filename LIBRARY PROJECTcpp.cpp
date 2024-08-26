//Crate a structure called library to hold accession number, title of book, auther name price of book and flag indecting whether
//book is issud or not. write a menu driven program that implements the working of a library. the menu option should be...
//  1} Add book information.
//  2} Display book information.
//  3} list of all book of given auther.
//  4} list of title of specified book.
//  5} list the count of book.
//  6} list the book in the order of accesion num.
//  7} Exit...

#include<stdio.h>
#include<string.h>
	
	struct library
	{
		int asce;
		char bookname[90];
		char authername[90];
		float price;
		
	};
	
	int main()
	{
		struct library l[5];
		int i=0,choice,count=0,size,temp;
		char an[90];
		
			printf("\n1)Add Book information\n2)Display Book of Information\n3)List of all Books of Given Auther");
			printf("\n4)list the title of Specified Book\n5)list the count of Books in Library\n6)List the Books in the order of acession Number ");
			
			printf("\nEnter the size ");
			scanf("%d",&size);
		
		do{
				
			printf("\nEnter the choice\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					  printf("\n\nAdd Book information");
					  for(i=0;i<size;i++)
					  {
					  	printf("\nEnter accession number: \nEnter book name: \nEnter auther name:\nEnter price of book:\n");
						scanf("\n%d%s\n%s\n%f",&l[i].asce,&l[i].bookname,&l[i].authername,&l[i].price);
					  }
				       break;
				
				case 2:
					printf("\nDisplay Book Information");
					for(i=0;i<size;i++)
					{
					printf("\nAccession number is : %d",l[i].asce);
					printf("\nBook Tittle is : %s ",l[i].bookname);
					printf("\nAuthor name is : %s",l[i].authername);
					printf("\nPrice of Book is : %f",l[i].price);
					}
					break;
				
				case 3:
					
					printf("Enter the Auher name ");
					scanf("%s",&an);
					printf("\nList of all Books of Given Auther");
					for(i=0;i<size;i++)
					{
						if(strcmp(an,l[i].authername)==0)
						{
							printf("\n%s",l[i].bookname);

						}
					}
					break;
				case 4:
					printf("List the tittle of specified book");
					for(i=0;i<size;i++)
					{
						printf("\n%s",l[i].bookname);
					}
					break;
				case 5:
				printf("List the count of book in library");
					for(i=0;i<size;i++)
					{
						count++;
					}
					printf("\n%d",count);
				
					break;
				
				case 6:
					printf("List the book in the order of accession number");
					for(i=0;i<size;i++)
					{
						for(int j=i+1;j<size;j++)
						{
							if(l[i].asce > l[j].asce)
							{
								
								struct library temp =l[i];
								l[i]=l[j];
								l[j]=temp;
							}	
						}
						printf("\n%d====>%s",l[i].asce,l[i].bookname);
					}
					break;
				
				default:
				printf("Exit");		
			}
		}
		while(choice<7);
		
		return 0;
		
	}
