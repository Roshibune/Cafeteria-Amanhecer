#ER1VivianPetrille_LeticiaGrazielly_LuizGabriel.py

def main():
    alta = 0
    media = 0
    baixa = 0

    total_p_alta = 0.0
    total_p_media = 0.0
    total_p_baixa = 0.0

    total_mo_alta = 0.0
    total_mo_media = 0.0
    total_mo_baixa = 0.0
    
    print("----- Classificador de Fertilidade do Solo -----")
    num = int(input("Insira a quantidade de amostras: "))

    for i in range(num):
        print(f"\n{i+1}ª amostra: ")
        p = float(input("Teoror de fósforo na amostra [mg/dm³]: "))
        mo = float(input("Teor de matéria orgânica na amostra [g/kg]: "))
    
        if p>=20 and mo>=30:
            print("\n-----Alta Fertilidade!!-----")
            alta += 1
            total_p_alta += p
            total_mo_alta += mo
        elif (p >= 10 and mo >= 15) and (p < 20 or mo <30):
            print("\n----- Média fertilidade!! -----")
            media += 1
            total_p_media += p
            total_mo_media += mo

        elif p < 10 or mo < 15:
            print("\n----- Baixa fertilidade!! -----")
            baixa += 1
            total_p_baixa += p
            total_mo_baixa += mo

    # Resultados
    print("\n\n----- Resultados: -----")
    print(f"\nHá {alta} amostras de alta fertilidade.")
    if alta > 0:
        print(f"Média de fósforo de alta fertilidade = {total_p_alta / alta:.2f} [mg/dm³]")
        print(f"Média de matéria orgânica de alta fertilidade = {total_mo_alta / alta:.2f} [g/kg]")
    else:
        print("Nenhuma amostra!")

    print(f"\nHá {media} amostras de média fertilidade.")
    if media > 0:
        print(f"Média de fósforo de média fertilidade = {total_p_media / media:.2f} [mg/dm³]")
        print(f"Média de matéria orgânica de média fertilidade = {total_mo_media / media:.2f} [g/kg]")
    else:
        print("Nenhuma amostra!")

    print(f"\nHá {baixa} amostras de baixa fertilidade.")
    if baixa > 0:
        print(f"Média de fósforo de baixa fertilidade = {total_p_baixa / baixa:.2f} [mg/dm³]")
        print(f"Média de matéria orgânica de baixa fertilidade = {total_mo_baixa / baixa:.2f} [g/kg]")
    else:
        print("Nenhuma amostra!")

if __name__ == "__main__":
    main()