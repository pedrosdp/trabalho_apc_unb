//  Inclui função entrada e saída
#include<stdio.h>
//Allegro5!
// Inclui o cabeçalho da bibilioteca Allegro 5
#include <allegro5/allegro.h>

// Inclui o cabeçalho do add-on para uso de imagens
#include <allegro5/allegro_image.h>

// Inclui os audios
#include  <allegro5/allegro_audio.h>
#include  <allegro5/allegro_acodec.h>

//  Inclui função para full screen e Sleep
#include <windows.h>

//  Inclui função para números aleatório e system (cor da tela, fonte, limpar tela)
#include <stdlib.h>

//Usada para pegar o tempo e utilizar durante o sorteio RAND
#include <time.h>

//  Inclui função para calcular o tamanho da string
#include<string.h>

//  Inclui função para verificar caracter
#include<ctype.h>

char nome(char nomeTecnico[201]){
int i;
printf("\t\t\t\t\tDigite o nome do tecnico(Ate 200 caracteres)\n");
printf("\t\t\t\t\t");
scanf(" %[^\n]", nomeTecnico);
for(i = 0; i < strlen(nomeTecnico); i++){
    if((nomeTecnico[i] >= 'a' && nomeTecnico[i] <= 'z') || (nomeTecnico[i] >= 'A' &&
        nomeTecnico[i] <= 'Z') || (isblank(nomeTecnico[i]))){

}

    else{
        printf("\t\t\t\t\tERRO ,Digite apenas caraceteres alfabeticos : \n");
        printf("\t\t\t\t\t");
        scanf(" %[^\n]", nomeTecnico);
        i = 0;
    }
}

    return nomeTecnico;
}

struct jogadores
{
    char nome[80]; //Nomes dos jogadores do flamengo.
    int forca; //Força dos jogadores;
};

int tabela(int a, int b, int c, int d)
{
    //a = VASCO - pt1
    //b = FLAMENGO - pt2
    //c = FLUMINENSE - pt3
    //d = BOTAFOGO - pt4

    printf("\t\t\t\t\t");
    if (a<=b && a<=c && a<=d)
    {
        if (b<=c && c<=d)
        {
            printf("1 - BOTAFOGO - %d\n\t\t\t\t\t2 - FLUMINENSE - %d\n\t\t\t\t\t3 - FLAMENGO - %d\n\t\t\t\t\t4 - VASCO - %d\n",d,c,b,a);
        }
        else if(c<=b && b<=d)
        {
            printf("1 - BOTAFOGO - %d\n\t\t\t\t\t2 - FLAMENGO - %d\n\t\t\t\t\t3 - FLUMINENSE - %d\n\t\t\t\t\t4 - VASCO - %d\n\n",d,b,c,a);
        }
        else if(c<=d && d<=b)
        {
            printf("1 - FLAMENGO - %d\n\t\t\t\t\t2 - BOTAFOGO - %d\n\t\t\t\t\t3 - FLUMINENSE - %d\n\t\t\t\t\t4 - VASCO - %d\n",b,d,c,a);
        }
        else if(b<=d && d<=c)
        {
            printf("1 - FLUMINENSE - %d\n\t\t\t\t\t2 - BOTAFOGO - %d\n\t\t\t\t\t3 - FLAMENGO - %d\n\t\t\t\t\t4 - VASCO - %d\n\n",c,d,b,a);
        }
        else if(d<=b && b<=c)
        {
            printf("1 - FLUMINENSE - %d\n\t\t\t\t\t2 - FLAMENGO - %d\n\t\t\t\t\t3 - BOTAFOGO - %d\n\t\t\t\t\t4 - VASCO - %d\n\n",c,b,d,a);
        }
        else if(d<=c && c<=b)
        {
            printf("1 - FLAMENGO - %d\n\t\t\t\t\t2 - FLUMINENSE - %d\n\t\t\t\t\t3 - BOTAFOGO - %d\n\t\t\t\t\t4 - VASCO - %d\n\n",b,c,d,a);
        }
    }

    else if (b<=a && b<=c && b<=d)
    {
        if (c<=d && d<=a)
        {
            printf("1 - VASCO - %d\n\t\t\t\t\t2 - BOTAFOGO - %d\n\t\t\t\t\t3 - FLUMINENSE - %d\n\t\t\t\t\t4 - FLAMENGO - %d\n",a,d,c,b);
        }
        else if(d<=c && c<=a)
        {
            printf("1 - VASCO - %d\n\t\t\t\t\t2 - FLUMINENSE - %d\n\t\t\t\t\t3 - BOTAGOFO - %d\n\t\t\t\t\t4 - FLAMENGO - %d\n\n",a,c,d,b);
        }
        else if(d<=a && a<=c)
        {
            printf("1 - FLUMINENSE - %d\n\t\t\t\t\t2 - VASCO - %d\n\t\t\t\t\t3 - BOTAFOGO - %d\n\t\t\t\t\t4 - FLAMENGO - %d\n",c,a,d,b);
        }
        else if(a<=c && c<=d)
        {
            printf("1 - BOTAFOGO - %d\n\t\t\t\t\t2 - FLUMINENSE - %d\n\t\t\t\t\t3 - VASCO - %d\n\t\t\t\t\t4 - FLAMENGO - %d\n\n",d,c,a,b);
        }
        else if(c<=a && a<=d)
        {
            printf("1 - BOTAFOGO - %d\n\t\t\t\t\t2 - VASCO - %d\n\t\t\t\t\t3 - FLUMINENSE - %d\n\t\t\t\t\t4 - FLAMENGO - %d\n\n",d,a,c,b);
        }
        else if(a<=d && d<=a)
        {
            printf("1 - FLUMINENSE - %d\n\t\t\t\t\t2 - BOTAFOGO - %d\n\t\t\t\t\t3 - VASCO - %d\n\t\t\t\t\t4 - FLAMENGO - %d\n\n",c,d,a,b);
        }
    }

    else if (c<=a && c<=b && c<=d)
    {
        if (d<=b && b<=a)
        {
            printf("1 - VASCO - %d\n\t\t\t\t\t2 - FLAMENGO - %d\n\t\t\t\t\t3 - BOTAFOGO - %d\n\t\t\t\t\t4 - FLUMINENSE - %d\n",a,b,d,c);
        }
        else if(b<d && d<a)
        {
            printf("1 - VASCO - %d\n\t\t\t\t\t2 - BOTAFOGO - %d\n\t\t\t\t\t3 - FLAMENGO - %d\n\t\t\t\t\t4 - FLUMINENSE - %d\n\n",a,d,b,c);
        }
        else if(b<=a && a<=d)
        {
            printf("1 - BOTAFOGO - %d\n\t\t\t\t\t2 - VASCO - %d\n\t\t\t\t\t3 - FLAMENGO - %d\n\t\t\t\t\t4 - FLUMINENSE - %d\n",d,a,b,c);
        }
        else if(a<=b && b<=d)
        {
            printf("1 - BOTAFOGO - %d\n\t\t\t\t\t2 - FLAMENGO - %d\n\t\t\t\t\t3 - VASCO - %d\n\t\t\t\t\t4 - FLUMINENSE - %d\n\n",d,b,a,c);
        }
        else if(a<=d && d<=b)
        {
            printf("1 - FLAMENGO - %d\n\t\t\t\t\t2 - BOTAFOGO - %d\n\t\t\t\t\t3 - VASCO - %d\n\t\t\t\t\t4 - FLUMINENSE - %d\n\n",b,d,a,c);
        }
        else if(d<=a && a<=b)
        {
            printf("1 - FLAMENGO - %d\n\t\t\t\t\t2 - VASCO - %d\n\t\t\t\t\t3 - BOTAFOGO - %d\n\t\t\t\t\t4 - FLUMINENSE - %d\n\n",b,a,d,c);
        }
    }

    else if (d<=a && d<=b && d<=c)
    {
        if (c<=b && b<=a)
        {
            printf("1 - VASCO - %d\n\t\t\t\t\t2 - FLAMENGO - %d\n\t\t\t\t\t3 - FLUMINENSE - %d\n\t\t\t\t\t4 - BOTAFOGO - %d\n",a,b,c,d);
        }
        else if(b<=c && c<=a)
        {
            printf("1 - VASCO - %d\n\t\t\t\t\t2 - FLUMINENSE - %d\n\t\t\t\t\t3 - FLAMENGO - %d\n\t\t\t\t\t4 - BOTAFOGO - %d\n\n",a,c,b,d);
        }
        else if(c<=a && a<=b)
        {
            printf("1 - FLAMENGO - %d\n\t\t\t\t\t2 - VASCO - %d\n\t\t\t\t\t3 - FLUMINENSE - %d\n\t\t\t\t\t4 - BOTAFOGO - %d\n",b,a,c,d);
        }
        else if(b<=a && a<=c)
        {
            printf("1 - FLUMINENSE - %d\n\t\t\t\t\t2 - VASCO - %d\n\t\t\t\t\t3 - FLAMENGO - %d\n\t\t\t\t\t4 - BOTAFOGO - %d\n\n",c,a,b,d);
        }
        else if(a<=b && b<=c)
        {
            printf("1 -  FLUMINENSE- %d\n\t\t\t\t\t2 - FLAMENGO - %d\n\t\t\t\t\t3 - VASCO - %d\n\t\t\t\t\t4 - BOTAFOGO - %d\n\n",c,b,a,d);
        }
        else if(a<=c && c<=b)
        {
            printf("1 - FLAMENGO - %d\n\t\t\t\t\t2 - FLUMINENSE - %d\n\t\t\t\t\t3 - VASCO - %d\n\t\t\t\t\t4 - BOTAFOGO - %d\n\n",b,c,a,d);
        }
    }
}


int main(void)
{
    char tecnico[201];
    char coach[201];
    char compravel[100];

    int soma1 = 0; //Soma das forças dos jogadores do Vasco
    int soma2 = 0; //Soma das forças dos jogadores do Flamengo
    int soma3 = 0; //Soma das forças dos jogadores do Fluminense
    int soma4 = 0; //Soma das forças dos jogadores do Botafogo
    struct jogadores Flamengo[16];
    struct jogadores Vasco[16];
    struct jogadores Fluminense[16];
    struct jogadores Botafogo[16];

    int camisa ; //Número da camisa dos jogadores

    //TIME DO FLAMENGO

    strcpy (Flamengo[0].nome, "Diego Alves");
    strcpy (Flamengo[1].nome, "Rafinha");
    strcpy (Flamengo[2].nome, "Rodrigo Caio");
    strcpy (Flamengo[3].nome, "Pablo Mari");
    strcpy (Flamengo[4].nome, "Filipe Luis");
    strcpy (Flamengo[5].nome, "Willian Arao");
    strcpy (Flamengo[6].nome, "Gerson");
    strcpy (Flamengo[7].nome, "Everton Ribeiro");
    strcpy (Flamengo[8].nome, "Gabriel Barbosa");
    strcpy (Flamengo[9].nome, "Giorgian de Arrascaeta");
    strcpy (Flamengo[10].nome, "Bruno Henrique");
    strcpy (Flamengo[11].nome, "Cesar");
    strcpy (Flamengo[12].nome, "Rhodolfo");
    strcpy (Flamengo[13].nome, "Diego Ribas");
    strcpy (Flamengo[14].nome, "Vitinho");


    //TIME DO VASCO

    strcpy (Vasco[0].nome, "Fernando Miguel");
    strcpy (Vasco[1].nome, "Yago Pikachu");
    strcpy (Vasco[2].nome, "Henriquez");
    strcpy (Vasco[3].nome, "Leandro Castan");
    strcpy (Vasco[4].nome, "Danilo Barcelos");
    strcpy (Vasco[5].nome, "Fellipe Bastos");
    strcpy (Vasco[6].nome, "Raul");
    strcpy (Vasco[7].nome, "Fredy Guarin");
    strcpy (Vasco[8].nome, "Bruno Cesar");
    strcpy (Vasco[9].nome, "Marrony");
    strcpy (Vasco[10].nome, "Rossi");
    strcpy (Vasco[11].nome, "Sidao");
    strcpy (Vasco[12].nome, "Ribamar");
    strcpy (Vasco[13].nome, "Marquinho");
    strcpy (Vasco[14].nome, "Andrey");


    //TIME DO FLUMINENSE

    strcpy (Fluminense[0].nome, "Marcos Felipe");
    strcpy (Fluminense[1].nome, "Gilberto");
    strcpy (Fluminense[2].nome, "Matheus Ferraz");
    strcpy (Fluminense[3].nome, "Luccas Claro");
    strcpy (Fluminense[4].nome, "Airton");
    strcpy (Fluminense[5].nome, "Yuri");
    strcpy (Fluminense[6].nome, "Pablo Dyego");
    strcpy (Fluminense[7].nome, "Lucao");
    strcpy (Fluminense[8].nome, "Frazan");
    strcpy (Fluminense[9].nome, "Ganso");
    strcpy (Fluminense[10].nome, "Yony Gonzalez");
    strcpy (Fluminense[11].nome, "Agenor");
    strcpy (Fluminense[12].nome, "Wellington Nem");
    strcpy (Fluminense[13].nome, "Guilherme");
    strcpy (Fluminense[14].nome, "Brenner");


    //TIME DO BOTAFOGO

    strcpy (Botafogo[0].nome, "Gatito Fernandez");
    strcpy (Botafogo[1].nome, "Gabriel");
    strcpy (Botafogo[2].nome, "Carli");
    strcpy (Botafogo[3].nome, "Marcinho");
    strcpy (Botafogo[4].nome, "Joao Paulo");
    strcpy (Botafogo[5].nome, "Gilson");
    strcpy (Botafogo[6].nome, "Cicero");
    strcpy (Botafogo[7].nome, "Luiz Fernando");
    strcpy (Botafogo[8].nome, "Valencia");
    strcpy (Botafogo[9].nome, "Diego Souza");
    strcpy (Botafogo[10].nome, "Alex Santana");
    strcpy (Botafogo[11].nome, "Gustavo Bochecha");
    strcpy (Botafogo[12].nome, "Diego Cavalieri");
    strcpy (Botafogo[13].nome, "Pcachu");
    strcpy (Botafogo[14].nome, "Victor Rangel ");


//função para tela cheia (cria um evento do teclado)
keybd_event(VK_MENU  , 0, 0, 0);
keybd_event(VK_RETURN, 0x1C, 0, 0);
keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
keybd_event(VK_MENU  , 0, KEYEVENTF_KEYUP, 0);

//alterar cor da tela e da fonte
system ("color 27");

// Variável representando a janela principal
  ALLEGRO_DISPLAY *janela = NULL;
  ALLEGRO_DISPLAY *clube = NULL;

  // Variável representando a imagem
  ALLEGRO_BITMAP *imagem = NULL;
  ALLEGRO_BITMAP *carregar = NULL;


  // Variável representando a música
  ALLEGRO_SAMPLE *musica = NULL;
  ALLEGRO_SAMPLE_INSTANCE *inst_musica = NULL;

  // Inicializa a Allegro
  al_init();

// Inicializa o add-on para utilização de imagens
  al_init_image_addon();

// Inicializa o audio
  al_install_audio();
  al_init_acodec_addon();
  al_reserve_samples(10);


  // Configura a janela
  janela = al_create_display(1366, 768);



  // Carrega a imagem
  imagem = al_load_bitmap("teste1.bmp");
  carregar = al_load_bitmap("teste2.bmp");

 // Musica

  musica = al_load_sample("1.ogg");
  inst_musica = al_create_sample_instance(musica);
  al_attach_sample_instance_to_mixer(inst_musica, al_get_default_mixer());
  al_set_sample_instance_playmode(inst_musica, ALLEGRO_PLAYMODE_LOOP);
  al_set_sample_instance_gain(inst_musica, 0.8);
  al_play_sample_instance(inst_musica);

  // Desenha a imagem na tela

  for (int i = 0; i<44; i++){

    if (i % 2 == 0){
    al_draw_bitmap(imagem, 0, 0, 0);
    al_flip_display();

    }
    else {
        al_draw_bitmap(carregar, 0, 0, 0);
    al_flip_display();

    }
    Sleep(500);
  }

// Finaliza a janela

al_destroy_display(janela);

  for(int x = 0;x<12;x++){
        printf("\n");
        }
    printf("\t\t\t\t\t\t");
    printf("Seja Bem-Vindo ao COACH SOCCER. \n");


    nome(tecnico);
    strcpy(coach,tecnico);

   system("cls");

clube = al_create_display(1366, 768);
  ALLEGRO_BITMAP *time1 = NULL;
  ALLEGRO_BITMAP *time2 = NULL;
  ALLEGRO_BITMAP *time3 = NULL;
  ALLEGRO_BITMAP *time4 = NULL;

//sorteio dos times
int j;
int teste;

//inicializa o gerador de números aleatórios
  srand(time(NULL));

for(j=0; j<1; j++){

teste = rand() % 4;

}

if (teste == 0){
   time1 = al_load_bitmap("time1.bmp");
   al_draw_bitmap(time1, 0, 0, 0);
   al_flip_display();
}
if (teste == 1){
    time2 = al_load_bitmap("time2.bmp");
    al_draw_bitmap(time2, 0, 0, 0);
    al_flip_display();
}
if (teste == 2){
   time3 = al_load_bitmap("time3.bmp");
   al_draw_bitmap(time3, 0, 0, 0);
al_flip_display();
}
if (teste == 3){
time4 = al_load_bitmap("time4.bmp");
al_draw_bitmap(time4, 0, 0, 0);
    al_flip_display();
}

Sleep(5000);

// Finaliza a janela

al_destroy_display(clube);

//Escalação
for(int x = 0;x<12;x++){
        printf("\n");
        }
    printf("\t\t\t\t\t\t");
    printf ("Professor, este eh seu elenco: \n");
//-------------------------------------------------------------------------
    //MOSTRA TIME DO VASCO
if (teste == 0){

   printf("\n\t\t\t\t\tTITULARES DO VASCO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO VASCO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLAMENGO
if (teste == 1){
    printf("\n\t\t\t\t\tTITULARES DO FLAMENGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLAMENGO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLUMINENSE
if (teste == 2){
   printf("\n\t\t\t\t\tTITULARES DO FLUMINENSE\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLUMINENSE\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO BOTAFOGO
if (teste == 3){
printf("\n\t\t\t\t\tTITULARES DO BOTAFOGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO BOTAFOGO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
}
Sleep(10000);
system("cls");


//Jogadores Compravéis
    int option, select;

    for(int x = 0;x<12;x++){
        printf("\n");
      for(int y = 0;y<5;y++){
        printf("\t");
      }
  }
    printf("%s,\n", coach);
    for(int y = 0;y<5;y++){
        printf("\t");
      }
    printf("Deseja comprar jogador?\n");
    printf("\t\t\t\t\tDigite\n");
    printf("\t\t\t\t\t1 para SIM\n");
    printf("\t\t\t\t\t2 para NAO\n");
    printf("\t\t\t\t\t");
    scanf("%d", &option);
    system("cls");
    // 1 - Danilo
    // 2 - Gabriel
    // 3 - Pedro

    while(option != 1 && option != 2)
    {
        printf("\t\t\t\t\tNUMERO INVALIDO - DIGITE NOVAMENTE\n");
        printf("\t\t\t\t\t1 para SIM\n");
        printf("\t\t\t\t\t2 para NAO\n");
        scanf("%d", &option);
        system("cls");
    }

for(int x = 0;x<4;x++){
        printf("\n");
        }

    if(option == 1)
    {
        printf("\n\t\t\t\t\tTemos os seguintes jogadores: ");
        printf("\n\t\t\t\t\t1 - Danilo Muniz");
        printf("\n\t\t\t\t\t2 - Gabriel Souza");
        printf("\n\t\t\t\t\t3 - Pedro Dias");
        printf("\n\t\t\t\t\tQual seria sua opcao: ");
        scanf("%d", &select);

            while(select != 1 && select != 2 && select != 3)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("\t\t\t\t\tNUMERO INVALIDO - DIGITE NOVAMENTE\n");
                printf("\n\t\t\t\t\t1 - Danilo Muniz");
                printf("\n\t\t\t\t\t2 - Gabriel Souza");
                printf("\n\t\t\t\t\t3 - Pedro Dias");
                scanf("%d", &select);
            }

        if(select == 1)
        {
            strcpy(compravel,"Danilo Muniz");
        }
        else if(select == 2)
        {
            strcpy(compravel,"Gabriel Souza");
        }
        else if(select == 3)
        {
            strcpy(compravel,"Pedro Dias");
        }
    strcpy (Flamengo[15].nome, compravel);
    strcpy (Vasco[15].nome, compravel);
    strcpy (Fluminense[15].nome, compravel);
    strcpy (Botafogo[15].nome, compravel);

        system("cls");

        //NOVO TIME
        //Escalação
      for(int x = 0;x<4;x++){
        printf("\n");
      for(int y = 0;y<5;y++){
        printf("\t");
      }
  }
printf ("Professor, agora este eh seu novo elenco: \n");
//-------------------------------------------------------------------------
    //MOSTRA TIME DO VASCO
if (teste == 0){

   printf("\n\t\t\t\t\tTITULARES DO VASCO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO VASCO\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLAMENGO
if (teste == 1){
    printf("\n\t\t\t\t\tTITULARES DO FLAMENGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLAMENGO\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLUMINENSE
if (teste == 2){
   printf("\n\t\t\t\t\tTITULARES DO FLUMINENSE\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLUMINENSE\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO BOTAFOGO
if (teste == 3){
printf("\n\t\t\t\t\tTITULARES DO BOTAFOGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO BOTAFOGO\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
}
printf("\n");
    }
    else
    {
        //Escalação

printf ("\t\t\t\t\tProfessor, este eh seu elenco: \n ");
//-------------------------------------------------------------------------
    //MOSTRA TIME DO VASCO
if (teste == 0){

   printf("\n\t\t\t\t\tTITULARES DO VASCO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO VASCO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLAMENGO
if (teste == 1){
    printf("\n\t\t\t\t\tTITULARES DO FLAMENGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLAMENGO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLUMINENSE
if (teste == 2){
   printf("\n\t\t\t\t\tTITULARES DO FLUMINENSE\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLUMINENSE\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO BOTAFOGO
if (teste == 3){
printf("\n\t\t\t\t\tTITULARES DO BOTAFOGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO BOTAFOGO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
}
printf ("\n");
    }
Sleep(4000);

//Início da Rodada 1
//Selecionar jogadores que entram em campo
int y;
int x[11];
int i;

printf("\n\t\t\t\t\t Para escalar seu time digite o numero do jogador seguido da tecla enter:\n");
if (teste == 0){

    for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
        x[i] = Vasco[y - 1].nome;
    }
    }

    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
}

if (teste == 1){

    for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
     x[i] = Flamengo[y - 1].nome;
    }
    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
}

if (teste == 2){
   for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
          x[i] = Fluminense[y - 1].nome;
    }

    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
}

if (teste == 3){
for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
        x[i] = Botafogo[y - 1].nome;
    }

    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
    }

system("cls");

//_______________________________________________________________________________________________________
int placar1, placar2, placar3, placar4;
int f1, f2, f3, f4;
int pt1=0, pt2=0, pt3=0, pt4=0;

//Aplicação de Forças Aleatórias

//FORCAS DOS TIMES

    //FORCA FLAMENGO

    for(camisa = 0; camisa<15; camisa++)
    {
        Flamengo[camisa].forca = rand()%10;
        soma2 = soma2 + Flamengo[camisa].forca;
    }
    if(teste == 1 && option == 1)
    {
        soma2 = soma2+8;
    }

    //FORCA VASCO

    for(camisa = 0; camisa<15; camisa++)
    {
        Vasco[camisa].forca = rand()%10;
        soma1 = soma1 + Vasco[camisa].forca;

    }
    if(teste == 0 && option == 1)
    {
        soma1 = soma1+8;
    }

    //FORCA FLUMINENSE

    for(camisa = 0; camisa<15; camisa++)
    {
        Fluminense[camisa].forca = rand()%10;
        soma3 = soma3 + Fluminense[camisa].forca;
    }
    if(teste == 2 && option == 2)
    {
        soma3 = soma3+8;
    }
    //FORCA BOTAFOGO

    for(camisa = 0; camisa<15; camisa++)
    {
        Botafogo[camisa].forca = rand()%10;
        soma4 = soma4 + Botafogo[camisa].forca;
    }
    if(teste == 3 && option == 2)
    {
        soma4 = soma4+8;
    }

f1 = soma1;
f2 = soma2;
f3 = soma3;
f4 = soma4;

for(int x = 0;x<12;x++){
        printf("\n");
      for(int y = 0;y<5;y++){
        printf("\t");
      }
  }

  printf("%s,\n", coach);
  for(int y = 0;y<5;y++){
        printf("\t");
      }

//1º Rodada Vasco x Flamengo

if (f1>f2){


placar1 = rand() % 6;
placar2 = rand () % 1;
printf ("O placar do jogo entre Vasco e Flamengo foi: %d x %d \n", placar1, placar2);

if (placar1>placar2){
    pt1 = 3;
}
else {
    pt1 = 1;
    pt2 = 1;
}

}

else if (f1<f2){


placar1 = rand() % 1;
placar2 = rand () % 6;
printf ("O placar do jogo entre Vasco e Flamengo foi: %d x %d \n", placar1, placar2);

  if (placar1<placar2){
    pt2 = 3;
}
else {
    pt1 = 1;
    pt2 = 1;
}
}

else if (f1==f2){


placar1 = 0;
placar2 = 0;
pt1 = 1;
pt2 = 1;
printf ("O placar do jogo entre Vasco e Flamengo foi: %d x %d \n", placar1, placar2);
  }

Sleep(4000);

// 1º rodada Fluminense x Botafogo
for(int y = 0;y<5;y++){
        printf("\t");
      }

if (f3>f4){


placar3 = rand() % 6;
placar4 = rand () % 1;
printf ("O placar do jogo entre Fluminense e Botafogo foi: %d x %d \n", placar3, placar4);

  if (placar3>placar4){
    pt3 = 3;
}
else {
    pt3 = 1;
    pt4 = 1;
}
}

else if (f3<f4){


placar3 = rand() % 1;
placar4 = rand () % 6;

printf ("O placar do jogo entre Fluminense e Botafogo foi: %d x %d \n", placar3, placar4);

if (placar3<placar4){
    pt4 = 3;
}
else {
    pt3 = 1;
    pt4 = 1;
}
}
else if (f3==f4){

placar3 = 0;
placar4 = 0;
pt3 = 1;
pt4 = 1;
printf ("O placar do jogo entre Fluminense e Botafogo foi: %d x %d \n", placar3, placar4);
  }
Sleep(5000);
 system("cls");

  //_____________________________________________________________________________________________
  //tabela
    for(int x = 0;x<12;x++){
        printf("\n");
    }
    tabela(pt1, pt2, pt3, pt4);
    Sleep(6000);
    system("cls");
//_________________________________________________________________________________________________
//Início da Segunda RODADA

  for(int x = 0;x<12;x++){
        printf("\n");
  }
  printf ("\t\t\t\t\tVamos para a Segunda Rodada! ");
  Sleep(4000);
  system("cls");

if(option == 1){
   for(int x = 0;x<4;x++){
        printf("\n");
      for(int y = 0;y<5;y++){
        printf("\t");
      }
  }
printf ("Aqui estao seus jogadores: \n");
//-------------------------------------------------------------------------
    //MOSTRA TIME DO VASCO
if (teste == 0){

   printf("\n\t\t\t\t\tTITULARES DO VASCO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO VASCO\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLAMENGO
if (teste == 1){
    printf("\n\t\t\t\t\tTITULARES DO FLAMENGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLAMENGO\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLUMINENSE
if (teste == 2){
   printf("\n\t\t\t\t\tTITULARES DO FLUMINENSE\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLUMINENSE\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO BOTAFOGO
if (teste == 3){
printf("\n\t\t\t\t\tTITULARES DO BOTAFOGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO BOTAFOGO\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
}
printf("\n");
    }
    else
    {
        for(int x = 0;x<4;x++){
        printf("\n");
        }
        //Escalação

printf ("\t\t\t\t\tAqui estao seus jogadores: \n ");
//-------------------------------------------------------------------------
    //MOSTRA TIME DO VASCO
if (teste == 0){

   printf("\n\t\t\t\t\tTITULARES DO VASCO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO VASCO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLAMENGO
if (teste == 1){
    printf("\n\t\t\t\t\tTITULARES DO FLAMENGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLAMENGO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLUMINENSE
if (teste == 2){
   printf("\n\t\t\t\t\tTITULARES DO FLUMINENSE\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLUMINENSE\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO BOTAFOGO
if (teste == 3){
printf("\n\t\t\t\t\tTITULARES DO BOTAFOGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO BOTAFOGO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
}
printf ("\n");
    }
Sleep(4000);
//Início da Rodada 2
//Selecionar jogadores que entram em campo
printf("\n\t\t\t\t\t Para escalar seu time digite o numero do jogador seguido da tecla enter:\n");
if (teste == 0){

    for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
        x[i] = Vasco[y - 1].nome;
    }

    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
}

if (teste == 1){

    for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
        x[i] = Flamengo[y - 1].nome;
    }

    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
}

if (teste == 2){
   for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
       x[i] = Fluminense[y - 1].nome;
    }

    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
}

if (teste == 3){
for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
            x[i] = Botafogo[y - 1].nome;
    }
    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
    }

system("cls");

for(int x = 0;x<12;x++){
        printf("\n");
    }
//2º Rodada Vasco x Fluminense
int placar5, placar6, placar7, placar8;
for(int y = 0;y<5;y++){
        printf("\t");
      }
if (f1>f3){


placar5 = rand() % 6;
placar6 = rand () % 1;
printf ("O placar do jogo entre Vasco e Fluminense foi: %d x %d \n", placar5, placar6);

if (placar5>placar6){
    pt1 = pt1 + 3;
}
else {
    pt1 = pt1 + 1;
    pt3 = pt3 + 1;
}

}

else if (f1<f3){


placar5 = rand() % 1;
placar6 = rand () % 6;
printf ("O placar do jogo entre Vasco e Fluminense foi: %d x %d \n", placar5, placar6);

  if (placar5<placar6){
    pt3 = pt3 + 3;
}
else {
    pt1 = pt1 +1;
    pt3 = pt3 + 1;
}
}

else if (f1==f3){


placar5 = 0;
placar6 = 0;
pt1 = pt1 + 1;
pt3 = pt3 + 1;
printf ("O placar do jogo entre Vasco e Fluminense foi: %d x %d \n", placar5, placar6);
  }

Sleep(4000);

// 2º rodada Flamengo x Botafogo
for(int y = 0;y<5;y++){
        printf("\t");
      }

if (f2>f4){


placar7 = rand() % 6;
placar8 = rand () % 1;
printf ("O placar do jogo entre Flamengo e Botafogo foi: %d x %d \n", placar7, placar8);

  if (placar7>placar8){
    pt2 = pt2 +3;
}
else {
    pt2 = pt2 + 1;
    pt4 = pt4 + 1;
}
}

else if (f2<f4){


placar7 = rand() % 1;
placar8 = rand () % 6;

printf ("O placar do jogo entre Flamengo e Botafogo foi: %d x %d \n", placar7, placar8);

if (placar7<placar8){
    pt4 = pt4 + 3;
}
else {
    pt2 = pt2 + 1;
    pt4 = pt4 + 1;
}
}
else if (f2==f4){

placar7 = 0;
placar8 = 0;
pt2 = pt2 + 1;
pt4 = pt4 + 1;
printf ("O placar do jogo entre Flamengo e Botafogo foi: %d x %d \n", placar7, placar8);
  }
Sleep(5000);
 system("cls");

 //_____________________________________________________________________________________________
  //tabela
    for(int x = 0;x<12;x++){
        printf("\n");
    }
    tabela(pt1, pt2, pt3, pt4);
    Sleep(6000);
    system("cls");
//_________________________________________________________________________________________________
  //_________________________________________________________________________________________________
//Início da Terceira RODADA

  for(int x = 0;x<12;x++){
        printf("\n");
  }
  printf ("\t\t\t\t\tVamos para a Terceira Rodada! ");
  Sleep(4000);
  system("cls");

if(option == 1){
   for(int x = 0;x<4;x++){
        printf("\n");
      for(int y = 0;y<5;y++){
        printf("\t");
      }
  }
printf ("Aqui estao seus jogadores: \n");
//-------------------------------------------------------------------------
    //MOSTRA TIME DO VASCO
if (teste == 0){

   printf("\n\t\t\t\t\tTITULARES DO VASCO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO VASCO\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLAMENGO
if (teste == 1){
    printf("\n\t\t\t\t\tTITULARES DO FLAMENGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLAMENGO\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLUMINENSE
if (teste == 2){
   printf("\n\t\t\t\t\tTITULARES DO FLUMINENSE\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLUMINENSE\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO BOTAFOGO
if (teste == 3){
printf("\n\t\t\t\t\tTITULARES DO BOTAFOGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO BOTAFOGO\n\n");
    for(camisa = 11; camisa < 16; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
}
printf("\n");
    }
    else
    {
        for(int x = 0;x<4;x++){
        printf("\n");
        }
        //Escalação

printf ("\t\t\t\t\tAqui estao seus jogadores: \n ");
//-------------------------------------------------------------------------
    //MOSTRA TIME DO VASCO
if (teste == 0){

   printf("\n\t\t\t\t\tTITULARES DO VASCO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO VASCO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Vasco[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLAMENGO
if (teste == 1){
    printf("\n\t\t\t\t\tTITULARES DO FLAMENGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLAMENGO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Flamengo[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO FLUMINENSE
if (teste == 2){
   printf("\n\t\t\t\t\tTITULARES DO FLUMINENSE\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO FLUMINENSE\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Fluminense[camisa].nome);
    }
}
//-------------------------------------------------------------------------
    //MOSTRA TIME DO BOTAFOGO
if (teste == 3){
printf("\n\t\t\t\t\tTITULARES DO BOTAFOGO\n\n");
    for(camisa = 0; camisa < 11; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
    printf("\n\t\t\t\t\tRESERVAS DO BOTAFOGO\n\n");
    for(camisa = 11; camisa < 15; camisa++)
    {
        printf("\t\t\t\t\t%d - %s\n", camisa+1, Botafogo[camisa].nome);
    }
}
printf ("\n");
    }
Sleep(4000);
//Início da Rodada 3
//Selecionar jogadores que entram em campo
printf("\n\t\t\t\t\t Para escalar seu time digite o numero do jogador seguido da tecla enter:\n");
if (teste == 0){

    for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
       x[i] = Vasco[y - 1].nome;
    }

    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
}

if (teste == 1){

    for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
        x[i] = Flamengo[y - 1].nome;
    }

    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
}

if (teste == 2){
   for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
      x[i] = Fluminense[y - 1].nome;
    }

    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
}

if (teste == 3){
for( i = 0; i < 11; i++){
    printf ("\t\t\t\t\t\t");
    scanf("%d", &y);
    if(y <= 0 || y >= 17){
        printf("\t\t\t\t\tJogador inexistente, digite novamente\n");
        i--;
    }
    if (y >= 0 && y <=16){
       x[i] = Botafogo[y - 1].nome;
    }

    }
    system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t");
        printf("Vamos para o jogo com este time:\n");
        printf("\n");

    for(i = 0; i < 11; i++){
        printf("\t\t\t\t\t");
        printf("%s\n", x[i]);
    }
    Sleep(6000);
    }

system("cls");

for(int x = 0;x<12;x++){
        printf("\n");
    }
//3º Rodada Vasco x Botafogo
int placar9, placar10, placar11, placar12;

for(int y = 0;y<5;y++){
        printf("\t");
      }
if (f1>f4){


placar9 = rand() % 6;
placar10 = rand () % 1;
printf ("O placar do jogo entre Vasco e Botafogo foi: %d x %d \n", placar9, placar10);

if (placar9>placar10){
    pt1 = pt1 + 3;
}
else {
    pt1 = pt1 + 1;
    pt4 = pt4 + 1;
}

}

else if (f1<f4){


placar9 = rand() % 1;
placar10 = rand () % 6;
printf ("O placar do jogo entre Vasco e Botafogo foi: %d x %d \n", placar9, placar10);

  if (placar9<placar10){
    pt4 = pt4 + 3;
}
else {
    pt1 = pt1 +1;
    pt4 = pt4 + 1;
}
}

else if (f1==f4){


placar9 = 0;
placar10 = 0;
pt1 = pt1 + 1;
pt4 = pt4 + 1;
printf ("O placar do jogo entre Vasco e Botafogo foi: %d x %d \n", placar9, placar10);
  }

Sleep(4000);

// 3º rodada Flamengo x Fluminense


for(int y = 0;y<5;y++){
        printf("\t");
      }

if (f2>f3){


placar11 = rand() % 6;
placar12 = rand () % 1;
printf ("O placar do jogo entre Flamengo e Fluminense foi: %d x %d \n", placar11, placar12);

  if (placar11>placar12){
    pt2 = pt2 +3;
}
else {
    pt2 = pt2 + 1;
    pt3 = pt3 + 1;
}
}

else if (f2<f3){


placar11 = rand() % 1;
placar12 = rand () % 6;

printf ("O placar do jogo entre Flamengo e Fluminense foi: %d x %d \n", placar11, placar12);

if (placar11<placar12){
    pt3 = pt3 + 3;
}
else {
    pt2 = pt2 + 1;
    pt3 = pt3 + 1;
}
}
else if (f2==f3){

placar11 = 0;
placar12 = 0;
pt2 = pt2 + 1;
pt3 = pt3 + 1;
printf ("O placar do jogo entre Flamengo e Fluminense foi: %d x %d \n", placar11, placar12);
  }
Sleep(5000);
 system("cls");

 //_____________________________________________________________________________________________
  //tabela
    for(int x = 0;x<12;x++){
        printf("\n");
    }
    tabela(pt1, pt2, pt3, pt4);
    Sleep(6000);
    system("cls");
//______________________________________________________________________________________________
//Resposta ao usuário

if(pt1 > pt2 && pt1 > pt3 && pt1 > pt4 && teste == 0){
    for(i = 0; i < 100; i++){
        printf("\t\t\t\t\tPARABENS, VOCE FOI CAMPEAO\n");
        Sleep(100);
    }
  }
  if(pt2 > pt1 && pt2 > pt3 && pt2 > pt4 && teste == 1){
    for(i = 0; i < 100; i++){
        printf("\t\t\t\t\tPARABENS, VOCE FOI CAMPEAO\n");
        Sleep(100);
    }
  }
  if(pt3 > pt1 && pt3 > pt2 && pt3 > pt4 && teste == 2){
    for(i = 0; i < 100; i++){
        printf("\t\t\t\t\tPARABENS, VOCE FOI CAMPEAO\n");
        Sleep(100);
    }
  }
  if(pt4 > pt1 && pt4 > pt2 && pt4 > pt3 && teste == 3){
    for(i = 0; i < 100; i++){
        printf("\t\t\t\t\tPARABENS, VOCE FOI CAMPEAO\n");
        Sleep(100);
    }
  }
  else{
    for(i = 0; i < 100; i++){
    printf("\t\t\t\t\tVOCE PERDEU, TENTE NOVAMENTE\n");
    Sleep(100);
    }
  }
 system("cls");
  //Créditos Finais

  for(int x = 0;x<12;x++){
        printf("\n");
    }

    printf("\t\t\t\t\tObrigado por jogar Coach Soccer Cariocao 2020\n");
    printf("\t\t\t\t\tProduzido por:\n");
    printf("\t\t\t\t\tDanilo Muniz\n");
    printf("\t\t\t\t\tGabriel Oliveira\n");
    printf("\t\t\t\t\tPedro Dias\n");

  return 0;
}


