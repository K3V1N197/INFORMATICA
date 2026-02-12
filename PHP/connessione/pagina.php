<?php
$conn = new mysqli("localhost", "root", "", "gestionescuola");

if ($conn->connect_error) {
    die("Connessione fallita: " . $conn->connect_error);
}
?>

<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>Scegli condizione</title>
    <link rel="stylesheet" href="form.css">
</head>
<body>

<h2>Scegli una condizione</h2>

<!-- FORM CHE FA POSTBACK SU SE STESSO -->
<form action="" method="post">

    <label for="condizione">Condizione</label>
    <select name="condizione">
        <option value="studenti con voto sufficente">voto sufficiente</option>
        <option value="studenti con voto pari a 10">voto pari a 10</option>
        <option value="Cognome simili">cognome simili</option>
    </select>

    <br><br>
    <input type="submit" value="Invia scelta">
</form>

<hr>

<?php
// SE È STATO INVIATO IL FORM
if ($_SERVER['REQUEST_METHOD'] === 'POST') {

    $co = $_POST['condizione'];

    switch ($co) {

        case 'studenti con voto sufficente':
            $sql = "SELECT s.nome, s.cognome, v.voto
                    FROM studenti s
                    JOIN valutazioni v ON s.id_studente = v.id_studente
                    WHERE v.voto >= 6";
            break;

        case 'studenti con voto pari a 10':
            $sql = "SELECT s.nome, s.cognome, v.voto
                    FROM studenti s
                    JOIN valutazioni v ON s.id_studente = v.id_studente
                    WHERE v.voto = 10";
            break;

        case 'Cognome simili':
            $sql = "SELECT s.nome, s.cognome, v.voto
                    FROM studenti s
                    JOIN valutazioni v ON s.id_studente = v.id_studente
                    WHERE s.cognome LIKE '%Panetta%'";
            break;

        default:
            die("Condizione non valida.");
    }

    $result = $conn->query($sql);

    if ($result && $result->num_rows > 0) {

        echo "<table border='1' cellpadding='8'>";
        echo "<tr><th>Nome</th><th>Cognome</th><th>Voto</th></tr>";

        while ($row = $result->fetch_assoc()) {
            echo "<tr>";
            echo "<td>{$row['nome']}</td>";
            echo "<td>{$row['cognome']}</td>";
            echo "<td>{$row['voto']}</td>";
            echo "</tr>";
        }

        echo "</table>";
    } else {
        echo "Nessun risultato trovato.";
    }
}

$conn->close();
?>

</body>
</html>
