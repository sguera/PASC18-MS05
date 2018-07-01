reset
set terminal svg noenhanced
set output '/home/hpc/ihpc/ihpc07/THESIS/provawork/2d-3r-heterogeneous-variable-star-stencil/experiments/20180627_121930/graph.svg' 
set auto x
set style data histogram
set style histogram errorbars gap 2 lw 1
set style fill solid border -1
set boxwidth 0.9
set yrange [0:*]
set key autotitle columnheader
set xlabel "Number of Threads"
set key title "Parameters (M_MAX N_MAX)"
set ylabel "GFlop/s"
set title "Performance Comparison of Project: 2d-3r-heterogeneous-variable-star-stencil\nImplemented Methods: openMP_node"
set key outside
set grid
plot '/home/hpc/ihpc/ihpc07/THESIS/provawork/2d-3r-heterogeneous-variable-star-stencil/experiments/20180627_121930/results.dat' using 2:3:4:xtic(1) w hist,\
	'' using 5:6:7:xtic(1)  w hist,\
	'' using 8:9:10:xtic(1)  w hist,\
	'' using 11:12:13:xtic(1)  w hist,\
	'' using 14:15:16:xtic(1)  w hist
