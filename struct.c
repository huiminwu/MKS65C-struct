<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

struct Teacher{
  char name[50];
  char subject[50];
};

char toString(struct Teacher *t) {
  printf("Name = %s \n Subject = %s \n", t->name, t->subject);
}

int main() {

	struct Teacher Teacher1;
	struct Teacher Teacher2;

	strcpy(Teacher1.name, "Konstantinovich");
	strcpy(Teacher1.subject, "Systems");
	//Teacher1.name = "Konstantinovich";
	//Teacher1.subject = "Systems";

	strcpy(Teacher2.name, "Brown");
	//Teacher2.name = "Brown";
	//Teacher2.subject = "SoftDev";

	printf("Random struct:Name =  %s,%s\n", Teacher1.name, Teacher1.subject);
	return 0;
}
=======
#include <stdio.h>
#include <string.h>

struct Teacher{
  char name[50];
  char subject[50];
};

void toStringStruct(struct Teacher t) {
  printf("Name = %s \nSubject = %s \n", t.name, t.subject);
}

void changeName(struct Teacher * t, char append[10]) {
    strcpy(t->name, strcat(t->name, append));
}

struct Teacher getStruct(){
    char * names[5] = {"Konstantinovich", "Brown", "Brooks", "DW", "Holmes"};
    char * subjects[5] = {"AI", "SoftDev", "Systems", "APCS", "Intro"};
    
    srand(time(NULL));
    struct Teacher newTeacher;

    strcpy(newTeacher.name, names[rand() % 5]);
    strcpy(newTeacher.subject, subjects[rand() % 5]);

    return newTeacher;
}

int main() {

        struct Teacher Teacher1;
        struct Teacher Teacher2;
        strcpy(Teacher1.name, "Konstantinovich");
        strcpy(Teacher1.subject, "Systems");
        strcpy(Teacher2.name, "Brown");
        strcpy(Teacher2.subject, "SoftDev");
        //Teacher2.name = "Brown";
        printf("=========\n Modifying the values of our struct \n");
        toStringStruct(Teacher1);
        toStringStruct(Teacher2);
        printf("=========\n Printing variables of our struct \n");
        changeName(&Teacher1, "h");
        changeName(&Teacher2, "woooww");
        toStringStruct(Teacher1);
        toStringStruct(Teacher2);
        printf("=========\n Testing randomly generated structs \n");
        toStringStruct(getStruct());
        return 0;
}
>>>>>>> bc90691160dbdaeb107004ffce52576b7f7c6069
