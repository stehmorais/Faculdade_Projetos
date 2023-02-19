// array de opções de jogo para validação
const options = ['pedra', 'papel', 'tesoura', 'lagarto', 'spoky'];

// variáveis para função que recebe os pontos do jogo
let pontos = 0;
let escolha = "";

do {
  let resposta = prompt("Faça a sua escolha\n== PEDRA 👊🏼 ==\n== PAPEL 🖐🏼 ==\n== TESOURA ✌🏼 ==\n== LAGARTO 🦎 ==\n== SPOKY 🖖🏼 ==\n== SAIR ❌ ==");
  // controla saida da resposta para evitar erros de maiusculas e minusculas
  let controle = resposta.toLowerCase();

  if (controle == 'sair') {
    alert("Bom jogo!");
    alert(`Recorde atual: ${pontos}`)
    break; // sai do loop caso o usuário digite 'sair'
  }

  // pegando numero aleatório para a cpu
  let cpu = options[Math.floor(Math.random() * options.length)];

  // verifico se elemento está no array
  if (options.includes(controle)) {
    // PEDRA   
    if (cpu == options[0]) {
      if (controle == options[0]) {
        alert("Empate entre pedras");
      } else {
        let resultado = controle == options[1] || controle == options[4] ? true : false;
        escolha = options[0];
        game(resultado);
      }
    }

    // PAPEL
    if (cpu == options[1]) {
      if (controle == options[1]) {
        alert("Empate entre papéis");
      } else {
        let resultado = controle == options[2] || controle == options[3] ? true : false;
        escolha = options[1];
        game(resultado);
      }
    }

    // TESOURA
    if (cpu == options[2]) {
      if (controle == options[2]) {
        alert("Empate entre tesouras");
      } else {
        let resultado = controle == options[0] || controle == options[4] ? true : false;
        escolha = options[2];
        game(resultado);
      }
    }

    // LAGARTO
    if (cpu == options[3]) {
      if (controle == options[3]) {
        alert("Empate entre lagartos");
      } else {
        let resultado = controle == options[0] || controle == options[2] ? true : false;
        escolha = options[3];
        game(resultado);
      }
    }

    //SPOKY
    if (cpu == options[4]) {
      if (controle == options[4]) {
        alert("Empate entre spokys");
      } else {
        let resultado = controle == options[1] || controle == options[3] ? true : false;
        escolha = options[4];
        game(resultado);
      }
    }

  } else {
    alert("Opção inválida, tente novamente");
  }

  function game(resultado) {
    pontos = resultado ? pontos + 1 : pontos - 1;
    if (resultado == true) {
      alert(`Você ganhou do ${escolha}`);
    } else {
      alert(`Você perdeu para ${escolha}`);
    }
  }

  alert(`Você tem um total de ${pontos} pontos`);

} while (true); // executa infinitamente até que o usuário digite 'sair'
