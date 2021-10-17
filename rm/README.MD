If passed arguments count is less then 2 , program ends .
Program compares "-f" and first passed argument , to check if user want to remove directory.
If first argument is "-f" in for loop we do remove for the rest arguments . 
If program successfully removes directory , prints "directory is removed " , in other case printd " smth is wrong"
if first argument is not "-f" second loop starts working .
program checks , if user tries to remove directory without "-f" , if yes program prints " -f is missing " and program ends.
Then if everything is correct , program removes the file , if remove process is done correctly , program prints "I" file is successfully removed,
in other case "Cannot remove file ".
