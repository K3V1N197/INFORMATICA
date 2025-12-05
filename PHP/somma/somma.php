<?php
$n1 = isset($_POST['n1']) ? $_POST['n1'] : null;
$n2 = isset($_POST['n2']) ? $_POST['n2'] : null;
$op = isset($_POST['op']) ? $_POST['op'] : 'add';

if ($n1 === null || $n2 === null) {
    echo 'Inserisci due numeri.';
    exit;
}

$n1 = floatval($n1);
$n2 = floatval($n2);

switch ($op) {
    case 'add':
        $r = $n1 + $n2;
        break;
    case 'sub':
        $r = $n1 - $n2;
        break;
    case 'mul':
        $r = $n1 * $n2;
        break;
    case 'div':
        $r = $n1 / $n2;
        break;
    default:
        echo 'Operazione non valida.';
        exit;
}

// Stampa il risultato 
echo $r;

?>
<!DOCTYPE html> 
<html lang="it"> 
<head> 
    <meta charset="UTF-8"> 
    <title>Risultato</title> 
</head> 
<body> 

<?php
// Recupera il numero 1 inviato tramite POST 
$n1 = $_POST['n1'];
// Recupera il numero 2 inviato tramite POST 
$n2 = $_POST['n2'];

// Calcola la somma dei due numeri
$somma = $n1 + $n2;
?>

<!-- Form per mostrare e poter modificare i numeri -->
<form method="post" action="somma.php">

    <label>Numero 1:</label> 
    <!-- Campo che mostra il valore del primo numero -->
    <input type="number" name="n1" value="<?php echo $n1; ?>">
    <br><br>

    <label>Numero 2:</label> ì
    <!-- Campo che mostra il valore del secondo numero -->
    <input type="number" name="n2" value="<?php echo $n2; ?>">
    <br><br>

    <button type="submit">Ricalcola</button> <!-- Bottone per ricalcolare -->
</form>

<!-- Stampa il risultato della somma -->
<h2>Somma: <?php echo $somma; ?></h2>

<br>

<!-- Link per tornare alla pagina iniziale -->
<a href="index.html">Torna indietro</a>

</body> <!-- Fine body -->
</html> <!-- Fine documento -->
