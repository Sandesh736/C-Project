#include <stdio.h>
#include<string.h>
int choice;
//int i=0;
typedef struct book{
	int book_id;
	char book_name[50];
    char author_name[50];
    double price;
    double rating;
}book;
void store(book*,int size);
void display(book*);
void search1(book*);
void update(book*);
void update_price_bkname(book*);
void update_bkid(book*);
void update_rating_name(book*);
void update_rating_bkid(book*);
void search_bkname(book*);
void search_bkid(book*);
void search_bkauthor(book*);
void delete1(book*);
void delete1_bkname(book*);
void delete1_bkid(book*);
void delete1_bkauthor(book*);
void top3(book*);
void top3_price(book*);
void top3_rating(book*);
//


int i=0;
int j,s,id;
char search[20];
	
int main() {
	
    book *a;
	int size;
    printf("enter size of array");
    scanf("%d",&size);
	a=(book*)malloc(sizeof(book)*size);
	
	
	
	
	
	
	do{
         	printf("1.add book\n 2.display books\n 3.search\n 4.update\n 5.delete\n 6.top3 \n 0.exit\n");	
	        printf(" enter choice ");
	        scanf("%d",&choice);
	
	switch(choice){
		
	    case 1:
			store(a,size);
		    break;
		case 2:
			display(a);
			break;
		
		case 3:
			search1(a);
			break;
		  
		case 4:
		    update(a);
		    break;
	
		case 5:
		    delete1(a);
		    break;
		case 6:
		    top3(a);		   		
			break;	  
		case 0:
				printf("thank you!!\n");
			
	}

}while(choice!=0);
	
	
}
void store(book* a,int size){
	if(i<size){
			
			printf("enter book_id ");
			scanf("%d",&a[i].book_id);
			
			printf("enter book_name ");
			scanf(" %[^\n]s",a[i].book_name);
			
			printf("enter author_name ");
			scanf(" %[^\n]s",a[i].author_name);
		
			
			printf("enter price of book ");
			scanf("%lf",&a[i].price);
			
			printf("enter rating of book ");
			scanf("%lf",&a[i].rating);
			i++;
		}
	else{
		printf("list is full\n");
	}	
	
}
void display(book* a){
	for(j=0;j<i;j++){
					printf("book-id=%d book_name=%s author_name=%s price=%.2lf  rating=%.2lf\n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
					
				}
	
}
void search1(book *a){
	printf("enter your choice\n 1.search by name\n 2.search by id\n 3.search by author name\n");
	scanf("%d",&s);
	int flag;
	switch(s){
		case 1:
			search_bkname(a);
			break;
		case 2:
			search_bkid(a);
			break;
			
		case 3:
		    search_bkauthor(a);	
		    break;
		
	}
			
			
		    	
			   
			    	
	
}


void search_bkname(book *a){
	                int flag;
	                printf("enter book name ");
			    	scanf("%s",&search);
			    	for(j=0;j<i;j++){
					
			                	int d =strcmp(search,a[j].book_name);
			                	if(d==0){
			                		flag=0;
								    printf("book is available details are below\n");
			    	         	    printf("book id= %d book_name =%s author_name= %s price =%.2lf  rating=%.2lf \n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
			    	         	    break;
			    	         }
							 
							 else{
							 	
							 	flag=1;
							 	
							 }
						}
						   if(flag==1){
						   
							printf("book is not available\n");
						
						}
	
	
}
void search_bkid(book *a){
	    printf("enter book_id ");
	    scanf("%d",&id);
	    int temp;
	    for(j=0;j<i;j++){
	    	if(id==a[j].book_id){
	    		temp=1;
	    		printf("book is available detials are below\n");
	    		printf("book id= %d book_name =%s author_name= %s price =%.2lf  rating=%.2lf\n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
			    break;
			
			}
			else{
				temp=0;
			}
			
		}
		if(temp==0){
			printf("book is not available\n");
			
		}
	
}
void search_bkauthor(book *a){
	                char author[20];
	                int temp=0;
	                printf("enter author name ");
			    	scanf("%s",&author);
			    	for(j=0;j<i;j++){
					
			                	int d =strcmp(author,a[j].author_name);
			                	if(d==0){
								    printf("book is available details are below\n");
			    	         	    printf("book id= %d book_name =%s author_name= %s price =%.2lf rating=%.2lf\n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
			    	         	    temp++;
			    	         }
							 
						}
						   if(temp<1){
						   
							printf("book is not available\n");
						
						}
	
}
void update(book *a){
	printf("enter choice\n");
	printf("1.update price\n2.update rating\n");
	int ch;
	scanf("%d",&ch);
	double price1;
	if(ch==1){
	               	printf("enter choices to update the price\n");
	               	printf("1.by using book_name\n 2.by using book_id\n");
		            int x;
		            char b[20];
		            scanf("%d",&x);
		            int flag;
		            switch(x){
		            	   case 1:
		            	   	    update_price_bkname(a);
		            	   	    break;
		            	   	    
		            	   case 2:	    
	                            update_bkid(a);
	                            break;
	                            
                    }	
}
if(ch==2){
		            printf("enter choices to update the ratings\n");
	               	printf("1.by using book_name\n 2.by using book_id\n");
	               	int c;
	               	scanf("%d",&c);
	                switch(c){
	        	             case 1:
	        		             update_rating_name(a);
	        		             break;
	        		             
	        	             case 2:
	        		             update_rating_bkid(a);
	        		             break;
	        		             
				      	  
			}      	
	     
	
}
}

		
		

void update_price_bkname(book *a){
	int flag;
	char b[20];
	printf("enter book name ");
	scanf("%s",&b);
	double price1;
		    
	for(j=0;j<i;j++){
					
			        int d =strcmp(b,a[j].book_name);
			        if(d==0){
			                flag=0;
			                printf("book name is matched\n");
			                printf("enter the updated price\n");
			                scanf("%lf",&price1);
			                a[j].price=price1;
			                printf("price has been updated successfully\n");
							}
							else{
								flag=1;
							}
			
		}
		if(flag==1){
				printf("book name not found ");
			}
}
void update_bkid(book *a){
		printf("enter book_id");
		int id;
		scanf("%d",&id);
		int f;
		double price1;
		for(j=0;j<i;j++){
			if(id==a[j].book_id){
				f=0;
				printf("book_id is matched\n");
				printf("enter the updated price\n");
			    scanf("%lf",&price1);
			    a[j].price=price1;
			    printf("price has been updated successfully\n");
				
				break;
				
			}
			else{
				 f=1;
			}
			
		}
		if(f==1){
			printf("book_id not matched");
		}
}
void update_rating_name(book *a){
	                           char b[20];
	                           printf("enter book name ");
	                           scanf("%s",&b);
	                           double rating;
	                           int flag;
	                           for(j=0;j<i;j++){
					
			                                      int d =strcmp(b,a[j].book_name);
			                                      if(d==0){
			                                                flag=0;
			                                                printf("book name is matched\n");
			                                                printf("enter the updated rating \n");
			                                                scanf("%lf",&rating);
			                                                a[j].rating=rating;
			                                                break;
							                           }
							                      else{
								                        flag=1;
							                        }
			
		}
		if(flag==1){
				printf("book name not found ");
			}
	                           
	
}
void update_rating_bkid(book *a){
	    printf("enter book_id");
		int id;
		scanf("%d",&id);
		double p;
		int f;
		for(j=0;j<i;j++){
			if(id==a[j].book_id){
				f=0;
				printf("book_id is matched\n");
				printf("enter updated rating ");
				scanf("%lf",&p);
				a[j].rating=p;
				printf(" rating has been updated successfully\n");
				break;
				
			}
			else{
				 f=1;
			}
			
		}
		if(f==1){
			printf("book_id not matched");
		}
}
void delete1(book *a){
	printf("1.delete by using book name\n 2.delete by using book id\n 3.delete by using author name\n");
    int k;
	scanf("%d",&k);
	switch(k){
		case 1:
			delete1_bkname(a);
			break;
		case 2:
		   delete1_bkid(a);
		   break;
		case 3:
		   delete1_bkauthor(a);
		   break;
	}
}
void delete1_bkname(book *a){
	int flag;
	char b[20];
	printf("enter book name to delete the book ");
	scanf("%s",&b);
	for(j=0;j<i;j++){
					
			        int d =strcmp(b,a[j].book_name);
		            if(d==0){
					
		                    flag=0;
		                    
			                printf("%s book has been deleted successfully\n ",a[j].book_name);
			                a[j].book_id=a[j+1].book_id;
			                strcpy(a[j].book_name,a[j+1].book_name);
			                strcpy(a[j].author_name,a[j+1].author_name);
			                a[j].price=a[j+1].price;
			                a[j].rating=a[j+1].rating;
			                break;
			           }
			          else{
			          	flag=1;
					  } 
							
			
		}
		if(flag==0){
		
	        	i--;
	   }
		if(flag==1){
				printf("book name not found\n");
			}
	
}
void delete1_bkid(book *a){
	
	int temp=0;
	int id;
	printf("enter book_id ");
	scanf("%d",&id);
	for(j=0;j<i;j++){
	    	if(id==a[j].book_id){
	    		temp=1;
	    		printf(" book id is available \n");
	    		printf("book has been deleted successfully\n");
	    		a[j].book_id=a[j+1].book_id;
			    strcpy(a[j].book_name,a[j+1].book_name);
			    strcpy(a[j].author_name,a[j+1].author_name);
			    a[j].price=a[j+1].price;
			    a[j].rating=a[j+1].rating;
	    	}
			
		}
		if(temp>0){
		
	        	i--;
	   }
		if(temp==0){
				printf("book id not found\n");
			}
}
void delete1_bkauthor(book*a){
	char b[20];
	int temp=0;
	printf("enter author name to delete the book ");
	scanf("%s",&b);
	for(j=0;j<i;j++){
					
			        int d =strcmp(b,a[j].author_name);
		            if(d==0){
					
		                    
							
		                    printf(" %s book has been deleted successfully\n ",a[j].author_name);
			                a[j].book_id=a[j+1].book_id;
			                strcpy(a[j].book_name,a[j+1].book_name);
			                strcpy(a[j].author_name,a[j+1].author_name);
			                a[j].price=a[j+1].price;
			                a[j].rating=a[j+1].rating;
			                temp++;
			            
			            }
			           
		    }
		if(temp>0){
		
	        	i--;
	    }
		if(temp==0){
				printf("book name not found\n");
		}         
							 
						
	
	
}
void top3(book*a){
	printf(" enter choice \n");
	int c;
	printf(" 1.top3 by price\n 2.top3 by rating\n ");
	scanf("%d",&c);
	switch(c){
		case 1:
			  top3_price(a);
			  break;
		case 2:
		      top3_rating(a);
			  break;	  
	}
}
void top3_price(book *a){
	double max,max1,max2;
	
	max=a[0].price;
	  for(j=0;j<i;j++){
		if(a[j].price>max){
			max=a[j].price;
		}
   }
        for(j=0;j<i;j++){
		if(max==a[j].price){
		printf("top3 books by price are\n");
	    printf(" 1. |book id= %d || book_name =%s || author_name= %s || price =%.2lf ||| rating=%.2lf ||\n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
    }
}
		max1=0;
        for(j=0;j<i;j++){
			if(a[j].price<max && max1<a[j].price){
				max1=a[j].price;
			}
			
		}
		for(j=0;j<i;j++){
		
		if(max1==a[j].price){
			printf(" 2. |book id= %d || book_name =%s || author_name= %s || price =%.2lf ||| rating=%.2lf ||\n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
			
		}
	}
	max2=0;
	for(j=0;j<i;j++){
		if(a[j].price<max1 && max2<a[j].price){
			max2=a[j].price;
		} 
	}
	for(j=0;j<i;j++){
	if(max2==a[j].price){
	 printf(" 3. |book id= %d || book_name =%s || author_name= %s || price =%.2lf ||| rating=%.2lf ||\n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
}
}
}
void top3_rating(book *a){
	 double rat,rat1,rat2;
	 rat=a[0].rating;
	 for(j=0;j<i;j++){
		if(a[j].rating>rat){
			rat=a[j].rating;
		}
   }
   for(j=0;j<i;j++){
   	if(rat==a[j].rating){
		printf("top3 books by rating are\n");
	    printf(" 1. |book id= %d || book_name =%s || author_name= %s || price =%.2lf ||| rating=%.2lf ||\n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
    }
}
        rat1=0;
        for(j=0;j<i;j++){
			if(a[j].rating<rat && rat1<a[j].rating){
				rat1=a[j].rating;
			}
			
		}
		for(j=0;j<i;j++){
		
		if(rat1==a[j].rating){
			printf(" 2. |book id= %d || book_name =%s || author_name= %s || price =%.2lf ||| rating=%.2lf ||\n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
			
		}
}
		rat2=0;
	    for(j=0;j<i;j++){
		  if(a[j].rating<rat1 && rat2<a[j].rating){
			rat2=a[j].rating;
		} 
	}
	for(j=0;j<i;j++){
	if(rat2==a[j].rating){
	 printf(" 3. |book id= %d || book_name =%s || author_name= %s || price =%.2lf ||| rating=%.2lf ||\n",a[j].book_id,a[j].book_name,a[j].author_name,a[j].price,a[j].rating);
}
}	
}



