/*SIMULADO*/

/* EXERCICIO 1 */

/*create database aula;
use aula;
create table temp(
	n int 
);
insert into temp values(3);
insert into temp values(5);
insert into temp values(3);
insert into temp values(4);
insert into temp values(10);

select sum(n)/count(n) from temp; == select avg(n) from temp;*/

/*EXERCICIO 3*/
/*create table novelas(
	codigo int auto_increment primary key,
    nome varchar(40) not null,
    horario_exibicao time
);

create table capitulos(
	codigo int auto_increment primary key,
    nome varchar(100) not null,
    data_exibicao date,
    cod_novela int not null references novelas(codigo)
);
ERRADO == select max(data_exibicao) from capitulos, novelas
            where novelas.nome = 'Novela A';
    PQ? 
        FALTAM INFORMACOES PARA QUE O SELECT SAIA COMO O DESEJADO

*/



/*GABARITO

1 - D
2 - Certo
3 - C
4 - Certo
5 - D
6 - D     (é distinct, pq é o unico de pesquisa que deixa de uma que deleta as colunas duplicadas)
7 - C
8 - Certo (o -p pede a senha do usuario)
9 - B
10 - C

*/