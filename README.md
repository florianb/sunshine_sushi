# Willkommen!

Herzlich Willkommen bei der Sunshine Sushi Gesellschaft, unser letzter Entwickler hat leider das Unternehmen verlassen.
Deshalb freuen wir uns, dass Sie sich künftig um unsere Bestellsoftware

**Sunshine Sushi Manager™**

kümmern.

# Welcome!

Welcome to Sunshine Sushi Company, unfortunately our last developer has left the company.
Therefore, we are glad that in the future you will take care of our ordering software

**Sunshine Sushi Manager™**.

---

## Erste Schritte

1. Forken/Klonen des Repositorys
2. Öffnen Sie das Projekt in einer C IDE Ihrer Wahl (ich empfehle CLion)
3. Lies dir den Quellcode durch und finde heraus, wie er funktioniert
4. Recherchiere und dokumentiere (im Quelltext) alle ungewöhnlichen Programmteile
5. Beginne mit der Arbeit an den Problemen
6. Besprich jede Lösung mit einem Mentor deines Vertrauens

## Getting Started

1. Fork/clone the Repository
2. Open the Project in the C IDE of your choice (i recommend CLion)
3. Read through the source code and find out how it works
4. Research and document (in the source) any unusual code pieces
5. Start working on the Issues
6. Discuss every solution you find with a mentor of your choice

## Issues

### Format price output

Passe die Darstellung von Preisen so an, dass nur noch zwei Nachkommastellen ausgegeben werden.

Adjust the display of prices so that only two decimal places are displayed.

### Add "show dishes" command

Füge ein Kommando "show dishes" hinzu, dass alle verfügbaren Speisen und deren Preise ausgibt.

En: Add a command "show dishes" that displays all available dishes and their prices.

### Add "show order" command

Füge ein Kommando "show order" hinzu, dass alle Posten einer Bestellung, inklusive der Preise und der Summe,
ausgibt ohne die Bestellung abzuschließen.

Add a command "show order" that displays all items of an order, including the prices and the total,
without closing the order.

### Show the tax on the bill

Berechne den Wert in Höhe des Steueranteils von 19% und weise ihn in Form "Including 19% tax: \<betrag> EUR" aus.
Wichtig, der Steueranteil wird nicht auf den Gesamtpreis aufgeschlagen lediglich ausgewiesen.

Calculate the value in the amount of 19% tax and display it in the form "Including 19% tax: \<amount> EUR".
Important, the tax portion is not added to the total price, only displayed.

### Check and correct calculation errors

Überprüfe und Behebe gegebenenfalls auftretende Berechnungsfehler bei den Nachkommastellen der dargestellten Preise.

Check and correct any calculation errors in the decimal places of the prices shown.

### Remove the length limit on the order list

Entferne die programmatische Limitierung der Länge der Bestellliste.

Remove the programmatic limitation of the length of the order list.

### Add "add dish" command

Füge ein "add dish \<name> \<preis>" hinzu, dass es ermöglicht zusätzliche Speisen
anzulegen. Für das Anlegen muss der Nutzer den Namen und den Preis der Speise
angeben.

Add an "add dish \<name> \<price>" that allows you to create additional dishes
to be created. For the creation the user must specify the name and the price of the dish.
of the dish.