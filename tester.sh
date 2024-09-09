#!/bin/bash

# === Definiowanie komend ===
# Każdy zestaw komend jest zapisany jako tablica, aby uniknąć problemów z argumentami
commands=(
    "input.txt" "grep -e" "wc" "output.txt"
    "input.txt" "sleep 5" "wc" "output.txt"
    "input.txt" "grep -e" "grep fasdfaskamceilvzisfjasmfhflaksc" "output.txt"
    "input_no_perm.txt" "grep -e" "wc" "output.txt"
    "input_no_exist.txt" "grep r" "wc" "output.txt"
 	"input_no_perm.txt" "grep r" "wc" "output.txt"
    "input_no_perm.txt" "grep r" "no_such_command" "output.txt"
    "input.txt" "grep -no_suchflag" "wc" "output.txt"
    "input.txt" "grep -e" "wc" "output.txt"
    "input.txt" "grep -e" "wc" "no_such_outfile"
    "input.txt" "grep -e" "wc" "outfile_without_permission.txt"
)

# === Wpisz tutaj nazwę Twojego programu ===
PIPEX="./pipex"   # Zmienna przechowująca ścieżkę do Twojego programu

# === Licznik do pętli po komendach ===
num_commands=${#commands[@]}

# Iteracja przez wszystkie elementy w tablicy `commands`, przeskakując co 4 elementy
for ((i=0; i<num_commands; i+=4)); do
    # Pobieranie wartości z tablicy `commands`
    file1=${commands[$i]}
    cmd1=${commands[$i+1]}
    cmd2=${commands[$i+2]}
    file2=${commands[$i+3]}

    # Informacja o komendzie
    echo "=== Testowanie komendy: [$file1, \"$cmd1\", \"$cmd2\", $file2] ==="

    # 1. Testowanie Twojego programu (pipex)
    echo "=== Testowanie Twojego programu (pipex) ==="
    echo "Komenda: $PIPEX \"$file1\" \"$cmd1\" \"$cmd2\" \"$file2\""
    $PIPEX "$file1" "$cmd1" "$cmd2" "$file2"
    PIPEX_EXIT_STATUS=$?

    echo -e "\nWynik działania programu (kod wyjścia): $PIPEX_EXIT_STATUS"
    echo "Pierwsza linia pliku wynikowego ($file2):"
    head -n 1 "$file2"

    # 2. Testowanie zwykłego pipa
    echo -e "\n=== Testowanie zwykłego pipa ==="
    echo "Komenda: <$file1 $cmd1 | $cmd2 >$file2"
    eval "<$file1 $cmd1 | $cmd2 >\"$file2\""
    PIPE_EXIT_STATUS=$?

    echo -e "\nWynik działania zwykłego pipa (kod wyjścia): $PIPE_EXIT_STATUS"
    echo "Pierwsza linia pliku wynikowego ($file2):"
    head -n 1 "$file2"

    echo -e "\n=====================\n"
done

echo "Testowanie zakończone."
