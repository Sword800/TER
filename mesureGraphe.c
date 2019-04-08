#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "gnuplot_i/src/gnuplot_i.h"

void grapheMesure(){
    gnuplot_ctrl * g = gnuplot_init();
    gnuplot_cmd(g, "set terminal pdfcairo size 10.5,7.86 ");
    gnuplot_cmd(g, "set output \"mesureTemps/mesure.pdf\"");
    gnuplot_cmd(g, "set xlabel 'Nombre de bits'");
    gnuplot_cmd(g, "set ylabel 'temps(seconde)'");
    gnuplot_cmd(g, "plot \"mesureTemps/mesure.txt\" u 1:2 every 2 title 'fermat' with lines , \"mesureTemps/mesure.txt\" u 1:3 every 2 title 'miller' with lines, \"mesureTemps/mesure.txt\" u 1:4 every 2 title 'strassen' with lines, \"mesureTemps/mesure.txt\" u 1:5 every 2 title 'erastothene' with lines");
    gnuplot_close(g);
}

void grapheLucas(){
    gnuplot_ctrl * g = gnuplot_init();
    gnuplot_cmd(g, "set terminal pdfcairo size 10.5,7.86 ");
    gnuplot_cmd(g, "set output \"mesureTemps/lucas.pdf\"");
    gnuplot_cmd(g, "set xlabel 'n impair'");
    gnuplot_cmd(g, "set ylabel 'temps(seconde)'");
    gnuplot_cmd(g, "plot \"mesureTemps/lucas.txt\" u 1:3 every 2::1 title 'Lucas' with lines");
    gnuplot_close(g);
}

void graphePepin(){
    gnuplot_ctrl * g = gnuplot_init();
    gnuplot_cmd(g, "set terminal pdfcairo size 10.5,7.86 ");
    gnuplot_cmd(g, "set output \"mesureTemps/pepin.pdf\"");
    gnuplot_cmd(g, "set xlabel 'Nombre de Fermat'");
    gnuplot_cmd(g, "set ylabel 'temps(seconde)'");
    gnuplot_cmd(g, "plot \"mesureTemps/pepin.txt\" u 1:3  title 'Pepin' with lines");
    gnuplot_close(g);
}

int main(int argc, char * argv[])
{
    
    grapheMesure();
    grapheLucas();
    graphePepin();

    return 0 ;
}