<?php

class Jokenpo {
    private $options = array("pedra", "papel", "tesoura", "lagarto", "spock");
    private $player_score = 0;
    private $computer_score = 0;
    private $game = true;
    private $rules = array(
        "pedra" => array("lagarto", "tesoura"),
        "papel" => array("pedra", "spock"),
        "tesoura" => array("papel", "lagarto"),
        "lagarto" => array("papel", "spock"),
        "spock" => array("tesoura", "pedra")
    );

    public function __construct() {}

    public function play() {
        while ($this->game) {
            echo "Digite sua jogada! -pedra -papel -tesoura -lagarto -spock ou digite 'sair' para encerrar o jogo:" . PHP_EOL;
            $player_choice = strtolower(trim(fgets(STDIN)));
            while (!in_array($player_choice, $this->options) && $player_choice != "sair") {
                echo "Jogada inválida. Tente novamente, se deseja sair digite 'sair'." . PHP_EOL;
                $player_choice = strtolower(trim(fgets(STDIN)));
            }
            if ($player_choice == "sair") {
                $this->game = false;
            } else {
                $computer_choice = $this->options[array_rand($this->options)];
                echo "Você escolheu {$player_choice} e o computador {$computer_choice}." . PHP_EOL;
                if ($player_choice == $computer_choice) {
                    echo "Empate!" . PHP_EOL;
                } elseif (in_array($computer_choice, $this->rules[$player_choice])) {
                    echo "Você venceu!" . PHP_EOL;
                    $this->player_score += 1;
                } else {
                    echo "Você perdeu!" . PHP_EOL;
                    $this->computer_score += 1;
                }
            }
        }
    }

    public function show_score() {
        echo "O Placar está: Jogador {$this->player_score} x {$this->computer_score} Computador" . PHP_EOL;
    }
}

$jogo = new Jokenpo();
$jogo->play();
$jogo->show_score();

?>
