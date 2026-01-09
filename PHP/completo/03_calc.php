<?php

$num1= $_POST['num1'];
$num2= $_POST['num2'];
$Operazione = $_POST['operazione'];

switch ($Operazione) {
	case 'somma':
		$risultato = $num1 + $num2;
		echo "La somma di $num1 e $num2 è uguale a $risultato";
		break;
	case 'differenza':
		$risultato = $num1 - $num2;
		echo "La differenza di $num1 e $num2 è uguale a $risultato";
		break;
	case 'prodotto':
		$risultato = $num1 * $num2;
		echo "Il prodotto di $num1 e $num2 è uguale a $risultato";
		break;
	case 'divisione':
		if ($num2 == 0) {
			echo "Errore: divisione per zero.";
		} else {
			$risultato = $num1 / $num2;
			echo "La divisione di $num1 per $num2 è uguale a $risultato";
		}
		break;
	default:
		echo "Operazione non valida.";
}

?>
