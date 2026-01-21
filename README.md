# *This project has been created as part of the 42 curriculum by parenvoi.*

> Un projet d'algorithmique complexe visant à trier des données sur une pile, avec un set d'instructions limité, en le moins de coups possible.

## 💡 Le Concept

Le but est de trier la pile **A** en utilisant la pile **B** comme zone de transit.

### Opérations autorisées

| Commande | Action |
| :--- | :--- |
| `sa`/`sb` | Intervertit les deux premiers éléments |
| `pa`/`pb` | Prend l'élément du haut d'une pile et le met sur l'autre |
| `ra`/`rb` | Décale tous les éléments vers le haut (le premier devient le dernier) |
| `rra`/`rrb` | Décale tous les éléments vers le bas (le dernier devient le premier) |

## 🚀 Algorithme

Pour optimiser le tri, j'ai implémenté :

- **Small Sort :** Un tri spécifique pour 3, 4 et 5 éléments.
- **Butterfly Sort :** Utilisation de l'indexation et des "chunks" pour gérer efficacement les gros volumes (500+).

## 🛠 Usage

```bash
# Compiler
make

# Lancer le tri
./push_swap 4 67 3 1 9

# Vérifier le nombre de coups
ARG="4 67 3 1 9"; ./push_swap $ARG | wc -l
```
