<?php
// Connessione al database
$conn = new mysqli("localhost", "root", "", "gestionescuola");

if ($conn->connect_error) {
    die("Connessione fallita: " . $conn->connect_error);
}

// Recupera la condizione dal form
$co = $_POST['condizione'];

// Seleziona la query in base alla condizione scelta
switch ($co) {

    case 'studenti con voto sufficente':
    
        $sql = "SELECT s.nome, s.cognome, v.voto
            FROM studenti AS s
            JOIN valutazioni AS v ON s.id_studente = v.id_studente
            WHERE v.voto >= 6";
        break;

    case 'studenti con voto pari a 10':
    
        $sql = "SELECT s.nome, s.cognome, v.voto
            FROM studenti AS s
            JOIN valutazioni AS v ON s.id_studente = v.id_studente
            WHERE v.voto = 10";
        break;

    case 'Cognome simili':

        $sql = "SELECT s.nome, s.cognome, v.voto
            FROM studenti AS s
            JOIN valutazioni AS v ON s.id_studente = v.id_studente
            WHERE s.cognome LIKE '%hanafi%'";
    break;

    default:

        die("Condizione non valida.");
}

// Esegue la query
$result = $conn->query($sql);

// Verifica se ci sono risultati
if ($result->num_rows > 0) {

    echo "<table border='1' cellpadding='8' cellspacing='0'>";
    echo "<tr>
            <th>Nome</th>
            <th>Cognome</th>
            <th>Voto</th>
          </tr>";

    // Cicla sui risultati e li visualizza in tabella
    while ($row = $result->fetch_row()) {

        echo "<tr>";
        echo "<td>".$row[0]."</td>";
        echo "<td>".$row[1]."</td>";
        echo "<td>".$row[2]."</td>";
        echo "</tr>";
    }

    echo "</table>";
    echo "<br><br>";


} else {
    echo "Nessun risultato trovato.";
}

// Link per tornare alla pagina principale
echo "<a href='02_voti.html'>Torna alla ricerca</a>"; 

// Chiude la connessione
$conn->close();
?>