import pygame
import random
import time

# Inicializa o Pygame
pygame.init()

# Define as dimensões da janela
LARGURA, ALTURA = 1366, 768
tela = pygame.display.set_mode((LARGURA, ALTURA))
pygame.display.set_caption("Coach Soccer")

# Cores
AZUL = (0, 0, 128)
VERDE = (0, 255, 0)

# Carrega imagens e sons (substitua pelos seus arquivos de imagem e som)
imagem1 = pygame.image.load("teste1.bmp")
imagem2 = pygame.image.load("teste2.bmp")
musica = pygame.mixer.Sound("1.ogg")

# Função para exibir uma mensagem na tela
def exibir_mensagem(mensagem, cor, tamanho, posicao):
    fonte = pygame.font.SysFont(None, tamanho)
    texto = fonte.render(mensagem, True, cor)
    tela.blit(texto, posicao)

# Classe para os jogadores
class Jogador:
    def __init__(self, nome):
        self.nome = nome
        self.forca = random.randint(1, 10)

# Inicializa os times com todos os jogadores
times = {
    "Flamengo": [
        Jogador("Diego Alves"), Jogador("Rafinha"), Jogador("Rodrigo Caio"), Jogador("Pablo Mari"),
        Jogador("Filipe Luis"), Jogador("Willian Arao"), Jogador("Gerson"), Jogador("Everton Ribeiro"),
        Jogador("Gabriel Barbosa"), Jogador("Giorgian de Arrascaeta"), Jogador("Bruno Henrique"),
        Jogador("Cesar"), Jogador("Rhodolfo"), Jogador("Diego Ribas"), Jogador("Vitinho")
    ],
    "Vasco": [
        Jogador("Fernando Miguel"), Jogador("Yago Pikachu"), Jogador("Henriquez"), Jogador("Leandro Castan"),
        Jogador("Danilo Barcelos"), Jogador("Fellipe Bastos"), Jogador("Raul"), Jogador("Fredy Guarin"),
        Jogador("Bruno Cesar"), Jogador("Marrony"), Jogador("Rossi"), Jogador("Sidao"),
        Jogador("Ribamar"), Jogador("Marquinho"), Jogador("Andrey")
    ],
    "Fluminense": [
        Jogador("Marcos Felipe"), Jogador("Gilberto"), Jogador("Matheus Ferraz"), Jogador("Luccas Claro"),
        Jogador("Airton"), Jogador("Yuri"), Jogador("Pablo Dyego"), Jogador("Lucao"),
        Jogador("Frazan"), Jogador("Ganso"), Jogador("Yony Gonzalez"), Jogador("Agenor"),
        Jogador("Wellington Nem"), Jogador("Guilherme"), Jogador("Brenner")
    ],
    "Botafogo": [
        Jogador("Gatito Fernandez"), Jogador("Gabriel"), Jogador("Carli"), Jogador("Marcinho"),
        Jogador("Joao Paulo"), Jogador("Gilson"), Jogador("Cicero"), Jogador("Luiz Fernando"),
        Jogador("Valencia"), Jogador("Diego Souza"), Jogador("Alex Santana"),
        Jogador("Gustavo Bochecha"), Jogador("Diego Cavalieri"), Jogador("Pcachu"),
        Jogador("Victor Rangel")
    ]
}

# Função para simular uma partida entre dois times
def simular_partida(time1, time2):
    pontuacao1, pontuacao2 = sum(jogador.forca for jogador in times[time1]), sum(jogador.forca for jogador in times[time2])
    if pontuacao1 > pontuacao2:
        return (time1, 3, time2, 0)
    elif pontuacao2 > pontuacao1:
        return (time1, 0, time2, 3)
    else:
        return (time1, 1, time2, 1)

# Função para exibir os resultados das partidas
def exibir_resultados(resultados):
    for resultado in resultados:
        print(f"Resultado: {resultado[0]} {resultado[1]} x {resultado[3]} {resultado[2]}")
        time.sleep(2)

# Função principal do jogo
def main():
    tela.fill(AZUL)
    pygame.mixer.Sound.play(musica, loops=-1)
    exibir_mensagem("Seja Bem-Vindo ao COACH SOCCER!", VERDE, 40, (400, 200))
    pygame.display.flip()
    time.sleep(2)

    # Mostra a tela de transição entre as imagens
    for _ in range(10):
        tela.blit(imagem1, (0, 0))
        pygame.display.flip()
        time.sleep(0.5)
        tela.blit(imagem2, (0, 0))
        pygame.display.flip()
        time.sleep(0.5)

    # Realiza a simulação de partidas
    resultados = []
    resultados.append(simular_partida("Vasco", "Flamengo"))
    resultados.append(simular_partida("Fluminense", "Botafogo"))
    resultados.append(simular_partida("Vasco", "Fluminense"))
    resultados.append(simular_partida("Flamengo", "Botafogo"))
    resultados.append(simular_partida("Vasco", "Botafogo"))
    resultados.append(simular_partida("Flamengo", "Fluminense"))

    # Exibe os resultados
    exibir_resultados(resultados)

    # Classificação final (simples contagem de pontos)
    pontos = {"Vasco": 0, "Flamengo": 0, "Fluminense": 0, "Botafogo": 0}
    for res in resultados:
        pontos[res[0]] += res[1]
        pontos[res[2]] += res[3]

    print("\nClassificação Final:")
    for time, pontos in sorted(pontos.items(), key=lambda item: item[1], reverse=True):
        print(f"{time}: {pontos} pontos")

    pygame.quit()

if __name__ == "__main__":
    main()
