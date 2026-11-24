# 🪪 LuxCardFix – Desgaste do Cartão de Acesso Militar para DayZ

Mod de **scripts (Enforce Script)** para **DayZ Standalone** que ajusta o comportamento do item `lux_MilitaryAccessCard`, adicionando **desgaste por uso** ao cartão de acesso militar. Ele funciona como um **patch/complemento** do mod original que adiciona esse cartão.


> 📦 **Dependência:** este mod requer o mod **Lux** (que fornece a classe `lux_MilitaryAccessCard`) instalado no servidor. Este repositório contém apenas o código do LuxCardFix, que estende essa classe via `modded class`.

---

## ✨ Funcionalidades

- 🎲 O cartão **nasce com 50% de vida** quando é criado pelo Central Economy (`EEOnCECreate`)
- 🔻 **Cada uso consome 50% de vida** do cartão (`OnUse`)
- 🖥️ Toda a lógica roda **somente no servidor** (`GetGame().IsServer()`), evitando manipulação pelo cliente

Na prática, um cartão recém-spawnado (50% de vida) é **consumido em um único uso**, o que limita quantas vezes ele pode abrir portas/áreas.

---

## ⚙️ Como funciona

| Método | Comportamento |
|---|---|
| `EEOnCECreate()` | Após o spawn, define a vida do cartão em 0.5 (`SetHealth01`) |
| `OnUse()` | A cada uso, reduz a vida em 0.5, sem deixar o valor ficar negativo |

---

## 📁 Estrutura do projeto

```
LuxCardFix/
├── config.cpp
└── scripts/
    └── 4_World/
        └── lux_MilitaryAccessCard.c
```

> Ajuste os nomes dos arquivos conforme a estrutura real do seu projeto.

---

## 📥 Instalação

1. Instale o **mod Lux** que contém o `lux_MilitaryAccessCard`.
2. Empacote este mod em um `.pbo` (DayZ Tools → Addon Builder ou PBO Manager).
3. Assine o `.pbo` e coloque o `.bikey` na pasta `keys` do servidor.
4. Adicione ao `-mod=` **depois** do mod original:

```
-mod=@MODORIGINAL;@LuxCardFix
```

---

## 🔧 Personalização

Para alterar o comportamento, edite os valores no script:

- **Vida inicial:** `SetHealth01("", "", 0.5);`
- **Desgaste por uso:** `currentHealth - 0.5`

Por exemplo, usando `0.25` no desgaste, um cartão com 100% de vida duraria 4 usos.

---

## 🧰 Tecnologias

- Enforce Script (DayZ)
- `modded class`
- `CfgPatches` / `CfgMods` com `worldScriptModule`

---

## 👤 Autor

Desenvolvido por **HF**.

