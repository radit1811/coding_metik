document.addEventListener("DOMContentLoaded", function() {
    const chatMessages = document.getElementById("chat-messages");
    const messageInput = document.getElementById("message-input");
    const sendButton = document.getElementById("send-button");

    sendButton.addEventListener("click", function() {
        const messageText = messageInput.value;
        if (messageText.trim() !== "") {
            // Buat elemen pesan baru
            const messageElement = document.createElement("div");
            messageElement.className = "message";
            messageElement.textContent = messageText;

            // Tambahkan pesan ke daftar pesan
            chatMessages.appendChild(messageElement);

            // Reset input
            messageInput.value = "";
        }
    });

    messageInput.addEventListener("keyup", function(event) {
        if (event.key === "Enter") {
            sendButton.click();
        }
    });
});
