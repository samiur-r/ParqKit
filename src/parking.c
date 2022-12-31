#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 2

struct parking {
	int lot_num;
	char* vehicle_reg;
	char* owner_name;
};

int add_lot(struct parking *p, int available_lots, int occupied){
	if(available_lots <= 0) {
		printf("Sorry all parking lots are occupied");
		return 0;
	}

	char reg[30], name[30];
	printf("Enter vehicle registration number: ");
	fgets(reg, sizeof(reg), stdin);
	printf("Enter owner name: ");
	fgets(name, sizeof(name), stdin);
	p[occupied].lot_num = occupied;
	p[occupied].vehicle_reg = reg;
	p[occupied].owner_name = name;
	printf("Successfully occupied parking lot %d", occupied);
	writeToDB();
	return 1;
}

int free_lot(struct parking *p, int lot_num){
	for(int i = lot_num; i<MAX_SIZE; i++)
	{
		p[i] = p[i + 1];
	}
	printf("Successfully freed the parking lot");
	return 1;
}

int writeToDB(struct parking *p) {
	 FILE *parkingFp;
	 parkingFp = fopen ("/home/samiur/Apps/ParqKit/assets/parking.txt", "w");

	 if (parkingFp == NULL) {
		 perror("Error while opening parking database .\n");
		 exit(1);
	   }

	 fwrite (&p, sizeof(struct parking), 1, parkingFp);
	 fwrite (&p, sizeof(struct parking), 1, parkingFp);

	 fclose(parkingFp);
}

int park(){
	int opt, available_lots = MAX_SIZE, occupied = 0, position;
	struct parking p[MAX_SIZE];

	for( ; ; ) {
		printf("\n\n1. Get a parking lot\t\t2. Free a parking lot\t\t3. Display occupants\t\t4. Exit");
		printf("\nSelect an option: ");
		scanf("%d", &opt);
		getchar();

		switch(opt){
			case 1:
				int result = add_lot(p, available_lots, occupied);
				if(result != 0) {
					occupied++;
					available_lots--;
				}
				break;
			case 2:
				printf("Enter lot number to free: ");
				scanf("%d", &position);
				free_lot(p, position);
				occupied--;
				available_lots++;
				break;
			case 3:
				for(int i = 0; i < occupied; i++){
					printf("%d Lot number: %d, Vehicle registration: %s, Owner name: %s", i+1, p[i].lot_num, p[i].vehicle_reg, p[i].owner_name);
				}
				break;
			case 4:
				printf("\nThanks for using ParqKit");
				exit(1);

		}
	}

    return 0;
}
