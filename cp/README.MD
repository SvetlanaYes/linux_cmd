Program checks if the count of passed arguments is less then 3(because in cp we need at least 3 arguments)
if yes , program ends
Than if count of arguments = 3 , program tries to open the source file in read mode, if it cannot be opened , program ends,
After that program tries to open target file (second argument) in write mode , if file cannot be opened in write mode,
program ends.
If everything is correct , program starts copying process , and at the end of the program opened files are closed.
