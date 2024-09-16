document.addEventListener('DOMContentLoaded', () => {
    const contactsTableBody = document.querySelector('#contactsTable tbody');
    const addContactButton = document.getElementById('addContact');
    const contactForm = document.getElementById('contactForm');
    const formTitle = document.getElementById('formTitle');
    const nameInput = document.getElementById('name');
    const emailInput = document.getElementById('email');
    const phoneInput = document.getElementById('phone');
    const saveContactButton = document.getElementById('saveContact');
    const cancelButton = document.getElementById('cancel');

    let contacts = [
        { name: 'João', email: 'joao@email.com', phone: '123-456-789' },
        { name: 'Maria', email: 'maria@email.com', phone: '987-654-321' }
    ];

    let editingIndex = null;

    function renderContacts() {
        contactsTableBody.innerHTML = '';
        contacts.forEach((contact, index) => {
            const row = document.createElement('tr');
            row.innerHTML = `
                <td>${contact.name}</td>
                <td>${contact.email}</td>
                <td>${contact.phone}</td>
                <td>
                    <button class="edit" data-index="${index}">Editar</button>
                    <button class="delete" data-index="${index}">Excluir</button>
                </td>
            `;
            contactsTableBody.appendChild(row);
        });

        // Adiciona ouvintes de eventos para os botões "Editar" e "Excluir"
        document.querySelectorAll('button.edit').forEach(button => {
            button.addEventListener('click', handleEdit);
        });

        document.querySelectorAll('button.delete').forEach(button => {
            button.addEventListener('click', handleDelete);
        });
    }

    function handleEdit(event) {
        const index = event.target.dataset.index;
        const contact = contacts[index];
        nameInput.value = contact.name;
        emailInput.value = contact.email;
        phoneInput.value = contact.phone;
        formTitle.textContent = 'Editar Contato';
        contactForm.style.display = 'block';
        editingIndex = index;
    }

    function handleDelete(event) {
        const index = event.target.dataset.index;
        if (confirm('Tem certeza de que deseja excluir este contato?')) {
            contacts.splice(index, 1);
            renderContacts(); // Atualiza a tabela após a exclusão
        }
    }

    function handleSave() {
        const newContact = {
            name: nameInput.value,
            email: emailInput.value,
            phone: phoneInput.value
        };

        if (editingIndex !== null) {
            contacts[editingIndex] = newContact;
            editingIndex = null;
            formTitle.textContent = 'Adicionar Contato';
        } else {
            contacts.push(newContact);
        }

        contactForm.style.display = 'none';
        renderContacts(); // Atualiza a tabela após a adição ou edição
    }

    function handleCancel() {
        contactForm.style.display = 'none';
        editingIndex = null;
    }

    addContactButton.addEventListener('click', () => {
        nameInput.value = '';
        emailInput.value = '';
        phoneInput.value = '';
        formTitle.textContent = 'Adicionar Contato';
        contactForm.style.display = 'block';
    });

    saveContactButton.addEventListener('click', handleSave);
    cancelButton.addEventListener('click', handleCancel);

    renderContacts(); // Inicializa a tabela com os contatos
});
