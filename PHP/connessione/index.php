<?php
// Connessione al database
$conn = new mysqli("localhost", "root", "", "gestionescuola");

if ($conn->connect_error) {
    die("Connessione fallita: " . $conn->connect_error);
}

// Recupero e sanifico l'input solo se esiste
$co = filter_input(INPUT_POST, 'condizione', FILTER_SANITIZE_FULL_SPECIAL_CHARS);

if ($co) {
    switch ($co) {
        case 'studenti con voto sufficente':
            $sql = "SELECT s.nome, s.cognome, v.voto
                    FROM studenti AS s
                    JOIN valutazioni AS v ON s.id_studente = v.id_studente
                    WHERE v.voto >= 6";
            break;

        case 'studenti con voto pari a 10':
            $sql = "SELECT s.nome, s.cognome, v.voto
                    FROM studente AS s
                    JOIN valutazioni AS v ON s.id_studente = v.id_studente
                    WHERE v.voto = 10";
            break;

        case 'Cognome simili':
            $sql = "SELECT * FROM studente WHERE cognome LIKE '%panetta%'";
            break;

        default:
            die("Condizione non valida.");
    }

    // Eseguo la query
    $result = $conn->query($sql);

    if ($result && $result->num_rows > 0) {
        echo "<table border='1' cellpadding='8' cellspacing='0' style='margin:20px auto; border-collapse:collapse;'>";
        echo "<tr style='background-color:#2980b9; color:white;'>
                <th>Nome</th>
                <th>Cognome</th>
                <th>Voto</th>
              </tr>";

        while($row = $result->fetch_assoc()) {
            echo "<tr>
                    <td>" . htmlspecialchars($row["nome"]) . "</td>
                    <td>" . htmlspecialchars($row["cognome"]) . "</td>
                    <td>" . htmlspecialchars($row["voto"]) . "</td>
                  </tr>";
        }

        echo "</table>";
    } else {
        echo "<p style='text-align:center; color:red;'>Nessun risultato trovato.</p>";
    }
}

$conn->close();
?>

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Scegli condizione</title>
  </head>
  <body>
    <h2 style="text-align:center;">Scegli condizione</h2>

    <form action="index.php" method="post" style="text-align:center;">
      <label for="condizione">Condizione</label>
      <select name="condizione" id="condizione">
        <option value="studenti con voto sufficente">voto sufficente</option>
        <option value="studenti con voto pari a 10">voto pari a 10</option>
        <option value="Cognome simili">cognome simili</option>
      </select>

      <br><br>
      <input type="submit" value="Invia scelta">
    </form>
  </body>
</html>
