#include<stdio.h>
#include<stdlib.h>


struct record {
    int i;
} rec;

void create();

void read();

void update();

void deletefile();
int empty();
int emp();

// MAIN PROGRAM
int main() {
    int c, emp;
    do {
        printf("\n\tSelect your choice\n");
        printf("\n\t [1] Create");
        printf("\n\t [2] Read");
        printf("\n\t [3] Update");
        printf("\n\t [4] Delete");
        printf("\n\t [0] Exit");
        printf("\n\n\t------------------------------------\n");
        printf("\n\tEnter your choice:");
        scanf("%d", &c);
        printf("\n");

        switch (c) {
            case 1:
                create();
                break;
            case 2:
                emp = empty();
                if (emp == 0)
                    printf("\nThe number is EMPTY\n");
                else
                    read();
                break;
            case 3:
                emp = empty();
                if (emp == 0)
                    printf("\nThe number doesnt exists\n");
                else
                    update();
                break;
            case 4:
                emp = empty();
                if (emp == 0)
                    printf("\nThe number doesnt exists\n");
                else
                    deletefile();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid input! Please try again...");
        }
    } while (c != 0);
}

void create() {
    FILE *fp;
    fp = fopen("Record", "a");
    printf("\tEnter a number:");
    scanf("%d", &rec.i);
    fwrite(&rec, sizeof(rec), 1, fp);
    fclose(fp);
}

void read() {
    FILE *fp1;
    fp1 = fopen("Record", "r");
    printf("\n\tNumber");
    while (fread(&rec, sizeof(rec), 1, fp1))
        printf(" %d", rec.i);
    fclose(fp1);
}

void update() {
    int avl;
    FILE *fpt;
    FILE *fpo;
    int s, r, ch;
    printf("Enter index to update:");
    scanf("%d", &r);
    if (r == 0) {
        printf("Number %d is not Available", r);
    } else {
        fpo = fopen("Record", "r");
        fpt = fopen("TempFile", "w");
        while (fread(&rec, sizeof(rec), 1, fpo)) {
            s = rec.i;
            if (s != r)
                fwrite(&rec, sizeof(rec), 1, fpt);
            else {
                printf("Updated Number:");
                scanf("%s", &rec.i);

                fwrite(&rec, sizeof(rec), 1, fpt);
            }
        }
        fclose(fpo);
        fclose(fpt);
        fpo = fopen("Record", "w");
        fpt = fopen("TempFile", "r");
        while (fread(&rec, sizeof(rec), 1, fpt)) {
            fwrite(&rec, sizeof(rec), 1, fpo);
        }
        fclose(fpo);
        fclose(fpt);
        printf("UPDATED");
    }


}
void deletefile() {
    FILE *fpo;
    FILE *fpt;
    int r, s;
    printf("Enter the Number you want to delete :");
    scanf("%d", &r);
    if (r == 0)
        printf("Roll no %d is not available in the file\n", r);
    else {
        fpo = fopen("Record", "r");
        fpt = fopen("TempFile", "w");
        while (fread(&rec, sizeof(rec), 1, fpo)) {
            s = rec.i;
            if (s != r)
                fwrite(&rec, sizeof(rec), 1, fpt);
        }
        fclose(fpo);
        fclose(fpt);
        fpo = fopen("Record", "w");
        fpt = fopen("TempFile", "r");
        while (fread(&rec, sizeof(rec), 1, fpt))
            fwrite(&rec, sizeof(rec), 1, fpo);
        printf("\nRECORD DELETED\n");
        fclose(fpo);
        fclose(fpt);
    }
}

int empty() {
    int c = 0;
    FILE *fp;
    fp = fopen("Record", "r");
    while (fread(&rec, sizeof(rec), 1, fp))
        c = 1;
    fclose(fp);
    return c;
}