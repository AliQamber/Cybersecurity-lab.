#include <stdio.h>

int main() {
    char incident_id[20];
    char analyst_name[50];
    int affected_systems;
    double recovery_cost_per_system;
    double downtime;

    printf("Enter Incident ID: ");
    scanf("%19s", incident_id);

    printf("Enter Analyst Name: ");
    scanf("%49s", analyst_name);

    printf("Enter Number of Affected Systems: ");
    scanf("%d", &affected_systems);

    printf("Enter Estimated Recovery Cost per System: ");
    scanf("%lf", &recovery_cost_per_system);

    printf("Enter Downtime (in hours): ");
    scanf("%lf", &downtime);

    double total_cost = affected_systems * recovery_cost_per_system;

    printf("\n=================================\n");
    printf("     SECURITY INCIDENT REPORT    \n");
    printf("=================================\n");
    printf("Incident ID      : %s\n", incident_id);
    printf("Analyst          : %s\n", analyst_name);
    printf("Affected Systems : %d\n", affected_systems);
    printf("Recovery Cost    : %.0f\n", recovery_cost_per_system);
    printf("Total Cost       : %.0f\n", total_cost);
    printf("Downtime         : %.2f hours\n", downtime);
    printf("=================================\n");

    return 0;
}
