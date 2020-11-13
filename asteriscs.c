struct _IO_FILE;
typedef struct _IO_FILE FILE;
extern int printf (const char *__restrict __format, ...);
extern int fgetc (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
                    const char *__restrict __modes);
int main(void)
{
    char c;
    FILE *arq;
    arq = fopen("ast.txt", "r");

    c = fgetc(arq);

    while(1){
        printf ("%c", c);
        printf ("\n");
    }
}
