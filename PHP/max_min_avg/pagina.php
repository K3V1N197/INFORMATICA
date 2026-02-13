<?php
$conn = new mysqli("localhost", "root", "", "gestionescuola");

if ($conn->connect_error) {
    die("Connessione fallita: " . $conn->connect_error);
}

$sql = "SELECT s.nome, s.cognome, 
               AVG(v.voto) as media, 
               MAX(v.voto) as massimo, 
               MIN(v.voto) as minimo
        FROM studenti s
        JOIN valutazioni v ON s.id_studente = v.id_studente
        GROUP BY s.id_studente, s.nome, s.cognome
        ORDER BY s.cognome, s.nome";

$result = $conn->query($sql);
$conn->close();
?>

<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>Statistiche Studenti</title>
    <link rel="stylesheet" href="form.css">
</head>
<body>

<h2>Statistiche Voti per Studente</h2>

<?php
if ($result && $result->num_rows > 0) {

    echo "<table border='1' cellpadding='8'>";
    echo "<tr><th>Nome</th><th>Cognome</th><th>Media</th><th>Voto Max</th><th>Voto Min</th></tr>";

    while ($row = $result->fetch_assoc()) {
        echo "<tr>";
        echo "<td>{$row['nome']}</td>";
        echo "<td>{$row['cognome']}</td>";
        echo "<td>" . round($row['media'], 2) . "</td>";
        echo "<td>{$row['massimo']}</td>";
        echo "<td>{$row['minimo']}</td>";
        echo "</tr>";
    }

    echo "</table>";
} else {
    echo "Nessun risultato trovato.";
}
?>

</body>
</html>
