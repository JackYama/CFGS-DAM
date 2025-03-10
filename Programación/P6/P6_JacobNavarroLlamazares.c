#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Author: Jacob Navarro LLamazares
Work: Gestión biblioteca
Language of the code: English
*/

//escribimos las estructuras del enum y del struct  definiendo los diferentes generos literarios que pueden comprender nuestros libros 
typedef enum{
    FICTION,
    NON_FICTION,
    POETRY,
    THEATER,
    ESSAY
}Literarygenre;
//aqui lo que hacemos es definir la estructura por la que se compone cada libro
typedef struct{
	int id;
	char title[80];
	char author[60];
	float price;
	Literarygenre genre;
	int availablequantity;
}Book;


// esta función creada es la que utilizaremos como variable para imprimir los diferentes atributos definidos en nuestra estructura 
void print_book(Book *book){

    printf("%d,%s,%s,%.2f,%d,%d\n",book->id,book->title,book->author,book->price,book->availablequantity,book->genre);//aqui ponemos flecha ya que queremos acceder directamente  anuestra estructura y el dato y asi usar directamente el valor que tenemos en vez de coger una copia como pasaria al utilizar un .

}
//en la siguiente función lo unico que queremos es que recorra todo nuestro array desde el primero hasta el 40 , los escanee y los imprima por pantalla con todos los atributos definidos en la estructura del libro
void show(Book *books){
	for (int i = 0; i < 40; ++i){//aqui en este for lo que decimos es de que lugar a que lugar va y con el ++i lo que hacemos es que no se pare en el primero sino que siga avanzando escaneando hasta el 40 definido 
        print_book(&books[i]);
	}
}//cabe destacar que en esta función y de aqui en adelante el genero se nos va a imprimir como un número o entero y no como un un char o palabra

//void mostrarlibro(Book *books,int id, int cantidadDisponible){
    //	for (int i = 0; i < 40; ++i)
	 //if (books[i].id == id) 
	 	//printf("%d,%s,%s,%.2f,%d,%d\n",books[i].id,books[i].titulo,books[i].autor,books[i].precio,books[i].cantidadDisponible,books[i].genre );
	//}


void show_book(Book *books){ //con esto lo que hacemos es apuntar a Book en cada función
    int id;
    int quantity; //declaramos enteros para nuestra función
    printf("Enter the ID of the book u want to search of: ");
    scanf("%d", &id); // Leer ID desde el usuario
    for (int i = 0; i < 40; ++i) {
        if (books[i].id == id) {//aqui le decimos al programa que si cuando recorre el array encuentra que en el apartado id de cada libro uno coincide con el introducido por el cliente pare y imprima toda la estructura del libro coincidente
             print_book(&books[i]);
            return;
        }
        else if (id< 1 || id > 40){//aqui decimos que en la función las direcciones que nos interesan son del 1 al 40 y que todo lo que esta fuera de la primera posicion a la 40 da error y no nos da nada
         printf("Error: Didn't find any Book with that ID%d\n", id);
        } 
        
      
    }
    
}
void increaseStock(Book *books){
    int id; 
    int quantity;//declaramos enteros

    // Solicitar al usuario el ID del libro
    printf("Enter the id of the book u want to add more stock : ");
    scanf("%d", &id);

    // Solicitar al usuario la cantidad a aumentar
    printf("Enter the amount u want do add: ");
    scanf("%d", &quantity);

    // Buscar el libro por ID y aumentar el stock
    for (int i = 0; i < 40; ++i) {
        if (books[i].id == id){//aqui decimos lo mismo que en la función anterior osea que si el id que introduce el cliente coincide para ahi y coge el libro que coincide y muestra toda su estructura
            books[i].availablequantity += quantity;//y aqui nos encargamos de utilizar lo escaneado en el segundo printf y añadir el numero escaneado a la cantidad disponible que ya tenia el libro elegido
            printf("Stock restored:\n");
            print_book(&books[i]);//y aqui solamente imprimimos el resultado del libro 
            return;
        }
    }

    // Si no se encuentra el libro, mostramos un mensaje de error
    printf("Error: Didn't find any book with that ID: %d.\n", id);
}
    //void show_books_by_category(Book *books,) {
    //for (int i = 0; i < 40; ++i) {
        //if (books[i].genre == category) {
             //print_book(&books[i]);
        //}
    //}
//}
        //void show_books_by_category hecho por switch
       /* void show_books_by_category(Book *books) {
    int genre;
    printf("Choose the category you want to see:\n");
    printf("1 - Fiction\n2 - Non-Fiction\n3 - Poetry\n4 - Theater\n5 - Essay\n");
    printf("Please enter the number of the category you want to see: ");
    scanf("%d", &genre);

    // Validación
    if (genre < 1 || genre > 5) {
        printf("Error: Invalid genre number %d.\n", genre);
        return;
    }

    printf("Books in the selected category:\n");
}

    //mostrar por categoria hecho en switch he elegido hacerlo por if ya que es mas fácil, directo y corto de realizar pero ofrece mas facilidad de cambio y mejor estructuración en casos con varias opciones como este un switch
    //switch (genre) {
        //case 1: // Fiction
            //for (int i = 0; i < 40; ++i) {
                //if (books[i].genre == FICTION) {
                    //print_book(&books[i]);
                //}
            //}
            //break;

        //case 2: // Non-Fiction
            //for (int i = 0; i < 40; ++i) {
                //if (books[i].genre == NON_FICTION) {
                    //print_book(&books[i]);
                //}
            //}
            //break;

        //case 3: // Poetry
            //for (int i = 0; i < 40; ++i) {
                //if (books[i].genre == POETRY) {
                    //print_book(&books[i]);
                //}
            //}
            //break;

        //case 4: // Theater
            //for (int i = 0; i < 40; ++i) {
                //if (books[i].genre == THEATER) {
                    //print_book(&books[i]);
                //}
            //}
            //break;

        //case 5: // Essay
            //for (int i = 0; i < 40; ++i) {
                //if (books[i].genre == ESSAY) {
                    //print_book(&books[i]);
                //}
            //}
            //break;

        //default:
            //printf("Error: Something went wrong.\n");
            //break;
    //}
    */
        void show_books_by_category(Book *books){
            int genre;//declaramos el entero 
            printf("Choose the category u want to see:\n 1-Fiction\n 2-NON Fiction\n 3-Poetry\n 4-Theather\n 5-Essay\n");
            printf("Please put the number of the category u want to see:");
            scanf("%d", &genre);
            genre--;//esto lo utilizamos para que Fiction no ocupe 0 en la dirección de memoria sino un 1 ya que con esto lo que hacemos es restar una posición a género y asi lo tenemos nivelado como le ofrecemos al cliente 

            // Validación 
            if (genre < 0 || genre > 4) {//le damos el intervalo de valores que puede introducir el cliente para que se ejecute la función o no 
                printf("Error: Invalid genre number %d.\n", genre + 1);
                return;
            }

            printf("Books in the selected category:\n");

            for (int i = 0; i < 40; ++i) {
                if (books[i].genre == genre) {//aqui simplemente es repetir lo mismo que repetimos en la función de mostrar segun el id, simplemente ordenamos que se reccorra el array y almacene los coincidentes con el numero introducido y que luego los imprima
                    print_book(&books[i]);
                }
            }
        }
        
        /*void show_books_by_author(Book *books);
        int author;
        printf("Please write the name of the author you want to search for:\n")
        scanf("%c",&author)
        for (int i = 0; i < 40; ++i) {
                if (books[i].genre == genre) {
                    print_book(&books[i]);
                }
            }
        {
    }
    */

int main(){
     Book books[40] = {
        {1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10},
        {2, "1984", "George Orwell", 12.49, FICTION, 5},
        {3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8},
        {4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12},
        {5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7},
        {6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9},
        {7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6},
        {8, "The Odyssey", "Homer", 17.49, FICTION, 4},
        {9, "Ulysses", "James Joyce", 25.00, FICTION, 2},
        {10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3},
        {11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11},
        {12, "The Iliad", "Homer", 18.50, FICTION, 7},
        {13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15},
        {14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20},
        {15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13},
        {16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6},
        {17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5},
        {18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8},
        {19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4},
        {20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14},
        {21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6},
        {22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8},
        {23, "Othello", "William Shakespeare", 10.99, THEATER, 7},
        {24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5},
        {25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4},
        {26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10},
        {27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9},
        {28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3},
        {29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15},
        {30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10},
        {31, "Paradise Lost", "John Milton", 12.00, POETRY, 7},
        {32, "Beowulf", "Anonymous", 15.00, POETRY, 5},
        {33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4},
        {34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9},
        {35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11},
        {36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8},
        {37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5},
        {38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12},
        {39, "The Republic", "Plato", 16.00, ESSAY, 6},
        {40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10}
    }; 
    //Llamadas a la función dentro de el main para que se ejecuten
    show(books);
    show_book(books);
    increaseStock(books); 
    show_books_by_category(books);
}