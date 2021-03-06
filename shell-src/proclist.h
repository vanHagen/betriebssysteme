/* 
  proclist.h - definiert den Datentyp "Prozess" zur internen 
                Repräsentation eines Prozesses
*/

typedef struct prozess {
	int pid, status;
	char * name;
	struct prozess *next;
}Prozess;

Prozess* neueProcListe(void);
void show(Prozess *head);
Prozess *neuerProzess(int pid, char *string);
void append(Prozess *head, Prozess *p);
Prozess *lookup(Prozess *head, int pid);
Prozess *next(Prozess *p);
void removeProzess(Prozess *head, Prozess *pro);
void cleanList(Prozess *head);