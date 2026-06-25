let player={
    name:"Utkarsh: ₹",
    chips:0
}
let total=2000
let cards = []
let sum = 0
let hasBlackJack = false
let isAlive = false
let message = ""
let messageEl = document.getElementById("message-el")
let sumEl = document.getElementById("sum-el")
let cardsEl = document.getElementById("cards-el")

let playerEl=document.getElementById("player-el")

playerEl.textContent=player.name+player.chips
function getRandomCard() {
    let randomNumber = Math.floor( Math.random()*13 ) + 1
    if (randomNumber > 10) {
        return 10
    } else if (randomNumber === 1) {
        return 11
    } else {
        return randomNumber
    }
}
let creditsEl=document.getElementById("credits-el")

creditsEl.textContent="Money Left: ₹"+total
function plus1000(){
    if(total>=1000 )
    player.chips+=1000
total-=1000
if(total>=0)
creditsEl.textContent="Money Left: ₹"+total
else
    creditsEl.textContent="Money Left: ₹"+0
playerEl.textContent=player.name+player.chips
}
function plus500(){
    if(total>=500)
    player.chips+=500
total-=500
if(total>=0)
creditsEl.textContent="Money Left: ₹"+total
else
    creditsEl.textContent="Money Left: ₹"+0
playerEl.textContent=player.name+player.chips

}
function plus100(){
    if(total>=100)
    player.chips+=100
total-=100
if(total>=0)
creditsEl.textContent="Money Left: ₹"+total
else
    creditsEl.textContent="Money Left: ₹"+0
playerEl.textContent=player.name+player.chips

}
function plus50(){
    if(total>=50)
    player.chips+=50
total-=50
if(total>=0)
creditsEl.textContent="Money Left: ₹"+total
else
    creditsEl.textContent="Money Left: ₹"+0
playerEl.textContent=player.name+player.chips

}
function plus20(){
    if(total>=20)
    player.chips+=20
total-=20
if(total>=0)
creditsEl.textContent="Money Left: ₹"+total
else
    creditsEl.textContent="Money Left: ₹"+0
playerEl.textContent=player.name+player.chips

}
function plus10(){
    if(total>=10)
    player.chips+=10
total-=10
if(total>=0)
creditsEl.textContent="Money Left: ₹"+total
else
    creditsEl.textContent="Money Left: ₹"+0
playerEl.textContent=player.name+player.chips
}
function plus5(){
    if(total>=5)
    player.chips+=5
total-=5
if(total>=0)
creditsEl.textContent="Money Left: ₹"+total
else
    creditsEl.textContent="Money Left: ₹"+0
playerEl.textContent=player.name+player.chips

}
if(total>=5){
function startGame() {
    isAlive = true
    let firstCard = getRandomCard()
let secondCard = getRandomCard()
    cards = [firstCard, secondCard]
    sum = firstCard + secondCard
    renderGame()
}
}
function renderGame() {
    cardsEl.textContent = "Cards: "
    for (let i = 0; i < cards.length; i++) {
        cardsEl.textContent += cards[i] + " "
    }
    sumEl.textContent = "Sum: " + sum
    if (sum <= 20) {
        message = "Do you want to draw a new card?"
        creditsEl.textContent="Money Left: ₹"+total
    } else if (sum === 21) {
        message = "You've got Blackjack!"
        hasBlackJack = true
        let totally=total+3*player.chips
        creditsEl.textContent="Money Left: ₹"+totally
    } else {
        message = "You're out of the game!"
        isAlive = false
        creditsEl.textContent="Money Left: ₹"+total
    }
    messageEl.textContent = message
}

function newCard() {
    if (isAlive === true && hasBlackJack === false) {
        let card = getRandomCard()
        sum += card
        cards.push(card)
        renderGame()        
    }
}
//P1:at every restart , player's bet, is not refreshing to zero
//P2:money always remains 2000 even if we win more than that sum of money
//S1:Loading effect
//S2:Realistic 