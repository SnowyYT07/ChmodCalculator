#include <stdio.h>

int main(){
	int Owner, OwnerPerm, Group, GroupPerm, Public, PublicPerm; 
	printf("\e[45m###################################################\e[0m\n");
	printf("\e[45m#########  Linux Permissions Calculator  ##########\e[0m\n");
	printf("\e[45m###################################################\e[0m\n");
        printf("\n\n \e[1;31mSelect Permissions for the file\e[0m\n");
        printf("\n\e[1;33m[1] NULL permission\e[0m"); 
        printf("\n\e[1;33m[2] Read-only\e[0m"); 
        printf("\n\e[1;33m[3] Write-Only\e[0m"); 
        printf("\n\e[1;33m[4] Read&Write\e[0m"); 
        printf("\n\e[1;33m[5] Execute-only\e[0m"); 
        printf("\n\e[1;33m[6] Read-Execute\e[0m");
        printf("\n\e[1;33m[7] Write-Execute\e[0m"); 
        printf("\n\e[1;33m[8] RWX(Read-Write-Execute)\e[0m"); 
        printf("\n\n \e[1;34mOption (Owner permissions)\e[0m  #> \e[0;33m");
        scanf("%d", &Owner);
        if(Owner == 0 || Owner >= 9){
            printf("\n\e[1;31mINVALID OPTION\e[0m");
            return 0;
        }
        printf("\n \e[1;34mOption (Group permissions)\e[0m  $> \e[0;33m");
        scanf("%d", &Group);
        if(Group == 0 || Group >= 9){
            printf("\n\e[1;31mINVALID OPTION\e[0m");
            return 0;
        }
        printf("\n \e[1;34mOption (Everyone permissions)\e[0m $> \e[0;33m");
        scanf("%d", &Public);
        if(Public == 0 || Public >= 9){
            printf("\n\e[1;31mINVALID OPTION\e[0m\n");
            return 0;
        }
    if(Owner == 1){OwnerPerm = 0;}
        else if(Owner == 2){OwnerPerm = 4;}
        else if(Owner == 3){OwnerPerm = 2;}
        else if(Owner == 4){OwnerPerm = 6;}
        else if(Owner == 5){OwnerPerm = 1;}
        else if(Owner == 6){OwnerPerm = 5;}
        else if(Owner == 7){OwnerPerm = 3;}
        else if(Owner == 8){OwnerPerm = 7;} 
    if(Group == 1){GroupPerm = 0;}
        else if(Group == 2){GroupPerm = 4;}
        else if(Group == 3){GroupPerm = 2;}
        else if(Group == 4){GroupPerm = 6;}
        else if(Group == 5){GroupPerm = 1;}
        else if(Group == 6){GroupPerm = 5;}
        else if(Group == 7){GroupPerm = 3;}
        else if(Group == 8){GroupPerm = 7;} 
    if(Public == 1){PublicPerm = 0;}
        else if(Public == 2){PublicPerm = 4;}
        else if(Public == 3){PublicPerm = 2;}
        else if(Public == 4){PublicPerm = 6;}
        else if(Public == 5){PublicPerm = 1;}
        else if(Public == 6){PublicPerm = 5;}
        else if(Public == 7){PublicPerm = 3;}
        else if(Public == 8){PublicPerm = 7;} 
        printf("\e[1;36mNumeric Permissions \e[0m: \e[1;34m%d%d%d\n\e[0m", OwnerPerm, GroupPerm, PublicPerm);
        printf("\e[1;36mTo change a file permission use \e[0m'\e[1;33mchmod %d%d%d example.txt\e[0m'\n", OwnerPerm, GroupPerm, PublicPerm);
}
