<?php
// Connessione al database
$conn = new mysqli("localhost", "root", "", "gestionescuola");

// Controllo connessione
if ($conn->connect_error) {
    die("Connessione fallita: " . $conn->connect_error);
}

// Dati dello studente da inserire
$nome = "Welid";
$cognome = "Hanafi";

// Query SQL con placeholder
// Inserisce un nuovo studente nella tabella `studenti`
$sql = "INSERT INTO studenti (nome, cognome) VALUES (?, ?)";

// Preparazione della query
$stmt = $conn->prepare($sql);

// Associazione dei parametri
// "ss" significa che stiamo passando 2 stringhe
$stmt->bind_param("ss", $nome, $cognome);

// Esecuzione
if ($stmt->execute()) {
    echo "Studente inserito con successo! ID generato: " . $conn->insert_id;
} else {
    echo "Errore durante l'inserimento: " . $stmt->error;
}

// Chiusura statement e connessione
$stmt->close();
$conn->close();
?>
