#include <stdio.h>
#include <stdlib.h>

int login(){
    FILE *usersFp;
    char tempUser[30], tempPass[30];
    int flag = 0;

    char user[30], pass[30];

	printf("\nEnter username: ");
	scanf("%s",user);
	printf("\nEnter Password: ");
	scanf("%s",pass);

    usersFp= fopen("/home/samiur/Apps/ParqKit/assets/users.txt", "r");

    while (fscanf(usersFp, "username: %s password: %s ", tempUser, tempPass) != EOF){
    	if( (strcmp(user,tempUser)==0) && (strcmp(pass,tempPass)==0) ){
    		flag = 1;
    		break;
    	}
    }

    fclose(usersFp);

    return flag;
}
